#include<bits/stdc++.h>
using namespace std;

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

node *inser(string s)
{
    if(s=="true")
    {
        int d;
        cin>>d;

        node*root=new node(d);
        string l;cin>>l;
        if(l=="true")
        {
            root->left=inser(l);
        }
        string r;cin>>r;
        if(r=="true")
        {
            root->right=inser(r);
        }
        return root;
    }

}
int heig(node*root)
{
    if(root==NULL){return 0;}
    int left=heig(root->left);
    int right=heig(root->right);
    int h=max(left,right)+1;
    return h;
}
void pri(node*root,int level,int itr)
{
    if(root==NULL){return;}
    if(level==1)
    {
        cout<<root->data<<" ";
    }
    else if(level>1)
    {
        if(itr){pri(root->left,level-1,itr);pri(root->right,level-1,itr);
        }
        else{
            pri(root->right,level-1,itr);pri(root->left,level-1,itr);
        }
    }
}
void prr(node*root)
{
    int h=heig(root);
    int i;
    bool itr=false;
    for(i=1;i<=h;i++)
    {
        pri(root,i,itr);

        itr=!itr;
    }
}
int main()
{
    node*root=NULL;
    root=inser("true");
    prr(root);
}
