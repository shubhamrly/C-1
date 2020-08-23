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
node*create(int a[],int s,int e)
{
    if(s>e){return NULL;}
    int mid=(s+e)/2;
    node *root=new node(a[mid]);
    root->left=create(a,s,mid-1);
    root->right=create(a,mid+1,e);
    return root;
}
void modify(node*root,int *sum)
{
    if(root==NULL){return ;}
modify(root->right,sum);
    *sum+=root->data;
    root->data=*sum;

    modify(root->left,sum);
}
void mod(node*root)
{   int sum=0;
    modify(root,&sum);
}
int main()
{   int n;cin>>n;
    int pre[n];
    for(int i=0;i<n;i++)
    {
        cin>>pre[i];
    }
    node *root=create(pre,0,n-1);

    mod(root);
    print(root);

}
