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
void print1(node*root,int curr,int &maxl)
{
    if(root==NULL){return;}
   if(maxl<curr)
   {
       cout<<root->data<<" ";
       maxl=curr;
   }
   print1(root->left,curr+1,maxl);
   print1(root->right,curr+1,maxl);
}
void print(node*root)
{
    int maxl=0;
    print1(root,1,maxl);
}
node*ins()
{int d;
    cin>>d;
    node*root=new node(d);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*f=q.front();q.pop();
       int c1,c2;cin>>c1>>c2;
     if(c1!=-1)
     {
        f->left=new node(c1);q.push(f->left);
     }
     if(c2!=-1)
     {
        f->right=new node(c2);q.push(f->right);
     }}
     return root;

}
int main()
{
    node*root=ins();
    print(root);
}
