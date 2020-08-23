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
int height(node*root)
{
    if(root==NULL){return 0;}
    int left=height(root->left);
    int right=height(root->right);
    int h=max(left,right)+1;
    return h;
}
node*bst(int a[],int s,int e)
{
    if(s>e){return NULL;}
int    mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=bst(a,s,mid-1);
    root->right=bst(a,mid+1,e);
}
void bfs(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";q.pop();
            if(f->left){q.push(f->left);}
            if(f->right){q.push(f->right);}
        }
    }return;
}
void kth(node*root,int k)
{
    if(root==NULL){return;}
    while(k){cout<<root->data<<" ";
    kth(root->left,k-1);
    kth(root->right,k-1);
    return;}
}
int repsum(node*root)
{
    if(root==NULL){return 0;}
    if(root->left==NULL&&root->right==NULL)
    {
        return root->data;
    }
    int left=repsum(root->left);
    int right=repsum(root->right);
    int temp=root->data;
    root->data=left+right;
    return temp+root->data;
}
int dia(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int op1=left+right;
    int op2=dia(root->left);
    int op3=dia(root->right);
    return(max(op1,max(op2,op3))+1);
}
int cou(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (1+cou(root->left)+cou(root->right));
}
int cousum(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data +cousum(root->left)+cousum(root->right));
}
node*sea(node*root,int key)
{
    if(root->data==key){cout<<"postion::"<<t<<","<<f<<endl;return root;}
     if(root->data>key){t++;return sea(root->left,key);}
     if(root->data<key){f++;return sea(root->right,key);}

}
bool bstr(node*root,int minv=INT_MIN,int maxv=INT_MAX)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>=minv&&root->data<=maxv&&bstr(root->left,minv,root->data)&&bstr(root->right,root->data,maxv))
    {
        return true;
    }
    return false;
}
int main()
{
    int a[]={4,3,2,5,6,},n=5,s=0,e=n-1;

    node*root=bst(a,s,e);
    print (root);
     //bfs(root);
     //kth(root,2);
     cout<<"\n here is count"<<cou(root);
     cout<<"\n here is SUM"<<cousum(root);

    //cout<<"\n"<<height(root)<<endl;
    //cout<<"\nMAX DIA::"<<dia(root)<<endl;
    //node*temp=sea(root,7);
    // cout<<"\nTHIS SHOWS BST\t"<<(int)bstr(root);
    // cout<<endl<<repsum(root->right->left)<<endl;
    //cout<<"\n data:\t"<<temp->data<<endl;
     //print (root);
}
