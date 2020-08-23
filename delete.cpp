#include<bits/stdc++.h>
using namespace std;
int t,f;
class node
{
public:int data;node*left,*right;
node(int d)
{
    data=d;
    left=right=NULL;
}
};
void print (node*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    print (root->left);
    print(root->right);
}
node*create(node*root,int a[],int s,int e)
{
    if(s>e){return NULL;}
    int mid=(s+e)/2;
    root=new node(a[mid]);
    root->left=create(root->left,a,s,mid-1);
    root->right=create(root->right,a,mid+1,e);
    return root;
}
node*minv(node*root)
{
    node*curr=root;
    while(curr&&curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
node* deleteBST (node* root, int key)
{
    if (root==NULL) return NULL;
    else if (key < root->data) {
        root->left =  deleteBST (root->left, key);
        return root; }
    else if (key > root->data) {
        root->right = deleteBST (root->right, key);
        return root; }
    else {
        if (root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        } else if (root->left==NULL && root->right!=NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right==NULL && root->left!=NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        } else {
            node * replace = root->left;
            while (replace ->right!=NULL)
            {
                replace = replace->right;
            }
            root->data = replace ->data;
            root->left = deleteBST (root->left, replace->data);
            return root;
        }
    }
}
int main()

{   int w;cin>>w;
for(int z=0;z<w;z++)
{
    int n=5;cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }sort(p,p+n);


     node*root=NULL;
    root=create(root,p,0,n-1);

    int f;cin>>f;
    while(f--){
    int t;cin>>t;
    deleteBST ( root,t);
    }
    print(root);cout<<endl;
}
}
