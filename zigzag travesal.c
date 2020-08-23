#include<bits/stdc++.h>
using namespace std;
class node
{
    public:int data;node*left,*right;
    node(int a)
    {
        data=a;left=right=NULL;
    }
};
void print1(node*root,int level,int &maxl)
{
    if(root==NULL){return;}
   if(maxl<level)
   {
       cout<<root->data<<" ";
       maxl=curr;
   }
   print1(root->left,level+1,maxl);
   print1(root->right,level+1,maxl);
}
void print(node*root)
{
    int maxl=0;
    print1(root,1,maxl);
}
node*ins(string s)
{  int d;
    if(s=="true")
    {
        cin>>d;
        node*root=new node(d);
        string l,r;
        cin>>l;
        if(l=="true")
        {
            root->left=ins(l);
        }
        cin>>r;
        if(r=="true")
        {
            root->right=ins(r);
        }
      return root;
    }}
    void d(node*root)
    {
        if(root==NULL){return ;}
        cout<<root->data<<" ";
        d(root->left);
        d(root->right);
    }

int main()
{
    node*root=ins("true");
    d(root);
}
