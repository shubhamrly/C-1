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
int hei(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=hei(root->left);
    int r=hei(root->right);
    int h=max(l,r)+1;

    return h;
}
void print1(node*root,int level,int t)
{
    if(root==NULL){return;}
    if(level==1){cout<<root->data<<" ";

    }
     if(level>1)
    {
        if(t==1)
        {
            print1(root->left,level-1,t);

            print1(root->right,level-1,t);
        }
        if(t==0) {

            print1(root->right,level-1,t);print1(root->left,level-1,t);

        }
    }
}
void print(node*root)
{
    int h=hei(root);

    int i;bool t=false;
    for(i=1;i<=h;i++)
    {
        print1(root,i,t);
        t=!t;
    }
}

int main()
{
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);
    printf("Spiral Order traversal of binary tree is \n");
    print(root);

    return 0;
}
