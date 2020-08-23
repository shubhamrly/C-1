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
void ziz(node*root)
{
    if(root==NULL){return;}
    stack<node*>curr,next;
    curr.push(root);bool ltr=true;
    while(!curr.empty())
    {
        node*temp=curr.top();curr.pop();
        if(temp)
        {
            cout<<temp->data<<" ";

            if(ltr)
            {
                if(temp->left)
                {
                    next.push(temp->left);
                }

                if(temp->right)
                {
                    next.push(temp->right);
                }
            }
             else{
                    if(temp->right)
                {
                    next.push(temp->right);
                }
             if(temp->left)
                {
                    next.push(temp->left);
                }
            }


        }
        if(curr.empty())
    {
        ltr=!ltr;
        swap(curr,next);
    }
    }

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
    ziz(root);
}
