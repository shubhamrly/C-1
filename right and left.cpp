#include<bits/stdc++.h>
using namespace std;
class node
{
    public:int data;node*left;node*right;int hd;
    node(int d)
    {
        data=d;left=NULL;right=NULL;hd=INT_MAX;
    }
};
void rightv(node*root,int l,int &maxl)
{
    if(root==NULL)
    {
        return ;
    }
    if(maxl<l)
    {
        cout<<root->data<<" :: ";
        maxl=l;
    }


    rightv(root->left,l+1,maxl);
    rightv(root->right,l+1,maxl);
}
void print(node*root)
{
    int maxl=0;
    rightv(root,1,maxl);
}
int main()
{
     node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);

    print(root);
}
