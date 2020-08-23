#include<bits/stdc++.h>
using namespace std;
class node{
public:int data;node*left,*right;
node(int d)
{
    data=d;left=right=NULL;
}
};
node*build(int a[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    node*root=new node(a[mid]);

        root->left=build(a,s,mid-1);

        root->right=build(a,mid+1,e);

}
void print (node*root)
{
    if(root==NULL){return ;}
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{   int t;cin>>t;
    for(int j=0;j<t;j++)
    {int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int s=0,e=n-1;
    node*root=build(a,s,e);
    print(root);
    cout<<endl;
    int l,h;
    cin>>l>>h;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=l&&a[i]<=h)
        {
            cout<<a[i]<<" ";

        }
    }cout<<endl;

}
}
