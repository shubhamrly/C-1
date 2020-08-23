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
node*build()
{
    int d;cin>>d;
    if(d==-1){return NULL;}
    node*root=new node(d);
    root->left=build();
    root->right=build();
    return root;
}
void print1 (node*root,int curr,int hd,map<int,pair <int,int> >&m )
{
    if(root==NULL){return;}
    if(m.find(hd)==m.end())
    {
        m[hd]=make_pair(root->data,curr);
    }
print1(root->right,curr+1,hd+1,m);
    print1(root->left,curr+1,hd-1,m);

}
void print(node*root)
{
    map<int,pair <int,int> >m;
    print1(root,0,0,m);
    //map<int,pair <int,int> >::iterator it;
    for(auto it=m.begin();it!=m.end();++it)
    {
        pair<int ,int> p=it->second;
        cout<<p.first<<" ";    }

}

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->left = new node(9);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(18);
    root->right->left->right = new node(23);
    print (root);

}
