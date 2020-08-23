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
void print(node*root)
{
    if(root==NULL){return ;}
if(root->right!=NULL&&root->left!=NULL){
        cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
    }
	if(root->left==NULL&&root->right==NULL){
		cout<<"END => "<< root->data <<" <= END"<<endl;
	}
	if(root->left==NULL&&root->right!=NULL){
		cout<<"END => "<< root->data <<" <= "<<root->right->data<<endl;
	}
	if(root->right==NULL&&root->left!=NULL){
		cout<<root->left->data<<" => "<< root->data <<" <= END"<<endl;
	}
    print(root->left);

    print (root->right);

}
int main()
{   int n,t;
cin>>t;
    int pre[t];
     for(int i=0;i<t;i++)
     {
         cin>>pre[i];
     }
cin>>n;
    int it[n];for(int i=0;i<n;i++){cin>>it[i];}


    int s=0,e=t-1;

    node*root;
    root=cre(it,pre,s,e);
    print(root);
}
