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
class hbp{
public:int height;bool bal;
}p;
hbp bald(node*root)
{

    if(root==NULL)
    {
        p.height=0;p.bal=true;
        return p;
    }
    hbp left=bald(root->left);
    hbp right=bald(root->right);
    p.height=max(left.height,right.height)+1;
    if((abs(left.height-right.height)<=1)&& left.bal&& right.bal)
    {
        p.bal=true;
    }
    else {
        p.bal=false;
    }
    return p;
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
int main()
{
    node*root=NULL;
    root=inser("true");
    bald(root);
    if(p.bal)
    {
        cout<<"true";
    }
    else{cout<<"false";}
}
