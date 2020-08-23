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
int size(node* node)
{
    if (node == NULL)
        return 0;
    else
        return(size(node->left) + 1 + size(node->right));
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
bool bst(node*root,int minv=INT_MIN,int maxv=INT_MAX)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>=minv&&root->data<=maxv&&bst(root->left,minv,root->data)&&bst(root->right,root->data,maxv))
    {
        return true;
    }
    return false;
}
int largest(node*root)
{
    if(bst(root))
    {
        return (size(root));
    }
    else{
        return max(largest(root->left),largest(root->right));
    }
}
int main()
{
    int n;cin>>n;
    int p[n],in[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>in[i];
    }
    node*root=cre(in,p,0,n-1);
    int k=largest(root);
    cout<<k;
}
