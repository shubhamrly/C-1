#include<bits/stdc++.h>
using namespace std;
int i=0;
class node
{
    public:int data;node*left,*right;
    node(int d)
    {
        data=d;left=right=NULL;
    }
};
void printd(node*root,int k)
{
    if(root==NULL||k<0)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    printd(root->left,k-1);
    printd(root->right,k-1);
}
int printk(node*root,node*ta,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root==ta)
    {
        printd(root,k);return 0;
    }
    int dl=printk(root->left,ta,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            printd(root->right,k-dl-1);return (1+dl);
        }
    }
    int dr=printk(root->right,ta,k);
    if(dr!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            printd(root->left,k-dr-1);
            return (1+dr);
        }
    }return -1;
}
node*fin(node*root,int data)
{
    if(root==NULL){return NULL;}
    if(root->data==data)
    {
        return root;
    }
    fin(root->left,data);
    fin(root->right,data);
}
node*cre(int *it,int*pre,int s,int e)
{

    if(s>e){return NULL;}
    node*root=new node(pre[i]);
    int index=-1;
    for(int j=s;j<=e;j++)
    {
        if(it[j]==pre[i])
        {
            index=j;break;
        }
    }i++;
    root->left=cre(it,pre,s,index-1);
    root->right=cre(it,pre,index+1,e);
    return root;
}
int main()
{   int n,t;
cin>>n;
    int pre[t];
     for(int i=0;i<t;i++)
     {
         cin>>pre[i];
     }
int it[n];for(int i=0;i<n;i++){cin>>it[i];}


    int s=0,e=t-1;

    node*root;
    root=cre(it,pre,s,e);
    cin>>t;int k,da;
    for(int i=0;i<t;i++)
    {
        cin>>da;
        cin>>k;
        node*ta=fin(root,da);
        printk(root,ta,k);
    }
}
