#include<bits/stdc++.h>
using namespace std;\
int k;
class node
{
    public:int data;node*left,*right;
    node(int d)
    {
        data=d;right=left=NULL;
    }
};
node*build(node*root,int data)
{
    if(root==NULL){return new node (data);}
    if(data<=root->data){root->left=build(root->left,data);}
    if(data>root->data){root->right=build(root->right,data);}

    return root;
}/*
node*build(node*root,int key)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();q.pop();
        if(!temp->left)
        {
            temp->left=new node(key);
            break;
        }
        else{q.push(temp->left);}
        if(!temp->right)
        {
            temp->right=new node(key);
            break;
        }else{q.push(temp->right);}

    }
}*/
int count(node*root)
{
    if(root==NULL){return 0;}
    return (1+count(root->left)+count(root->right));
}
int sea(node* root,int data)
{
    if(root==NULL||root->data==data)
    {
        return k;
    }
    if(root->data<data){k++;return sea(root->right,data);}
    if(root->data>data){k++;return sea(root->left,data);}

}
void inor(node* root)
{
    if(root!=NULL)
    {


        inor(root->left);

        inor(root->right);

cout<<root->data<<" :: ";

    }
}
node*minv(node*root)
{
    node*curr=root;
    while(curr&&(curr->left!=NULL))
    {
        curr=curr->left;
    }
    return curr;
}
node*del(node*root,int data)
{
    if(root==NULL){return root;}
    if(root->data>data)
    {
        root->left=del(root->left,data);

    }
    if(root->data<data)
    {
        root->right=del(root->right,data);

    }
    else{
        if(root->left==NULL)
        {
            node*temp= root->right;
            delete(root);
            return temp;
        }
        if(root->right==NULL)
        {
            node*temp=root->left;
            delete(root);
            return temp;
        }
        node*temp=minv(root->right);
       root->data= temp->data;
       root->right=del(root->right,temp->data);
    }return root;}
int hei(node*root)
{
    if(root==NULL){return 0;}
    int ls=hei(root->left);
    int rs=hei(root->right);
    return (max(ls,rs)+1);
}
void kth(node*root,int k)
{  if(root==NULL){return ;}
    while(k){cout<<root->data<<endl;

    kth(root->left,k-1);

    kth(root->right,k-1);

    return;
}}
void kte(node*root)
{
    queue<node*>q;
    q.push(root);q.push(NULL);
    while(!q.empty())
    {  node *f=q.front();
        if(f==NULL){cout<<endl;q.pop();
        if(!q.empty()){q.push(NULL);}}
     else  {
            cout<<f->data<<",";q.pop();
        if(f->left){q.push(f->left);}
     if(f->right){q.push(f->right);}
     }
    }return ;

}
int sum(node*root)
{
    if(root==NULL){return 0;}
    else{
        return(root->data+sum(root->left)+sum(root->right));
    }
}
int dia(node*root)
{
    if(root==NULL){return 0;}
    int h1=hei(root->left);
    int h2=hei(root->right);
    int op1=h1+h2;
    int op2=dia(root->left);
    int op3=dia(root->right);
    return (max(op1,max(op2,op3)));


}
class hb{
public:
    int height;bool bal;
};
hb the(node* root)
{
    hb p;
    if(root==NULL){p.height=0;p.bal=true;return p;}
    hb left=the(root->left);
    hb right=the(root->right);
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)&&left.bal&&right.bal)
    {
        p.bal=true;
    }
   else{p.bal=false;}
   return p;
}
class pai{
public:int height,diameter;
};
pai fast(node*root)
{   pai p;
    if(root==NULL)
    {
        p.height=p.diameter=0;return p;
    }
    pai left=fast(root->left);
    pai right=fast(root->right);
    p.height=max(left.height,right.height)+1;
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
    return p;
}

int rep(node*root)
{
    if(root==NULL){return 0;}
    if(root->left==NULL&&root->right==NULL)
    {
        return root->data;
    }
    int left=rep(root->left);
    int right=rep(root->right);
    int temp=root->data;
    root->data=left+right;
    return (temp+root->data);
}
int main()
{
    node* root=NULL;root =build(root,50);
    build(root,30);
    build(root,20);build(root,40);build(root,70);build(root,60);build(root,80);build(root,66);build(root,55);build(root,85);build(root,75);build(root,84);build(root,95);build(root,105);build(root,10);build(root,15);build(root,35);build(root,36
);build(root,112);//root=del(root,10);
    //node *temp=sea(root,340);
    cout<<hei(root)<<endl;
    //kth(root,7);
    kte(root);
    inor(root);
    pai p=fast(root);
    if(the(root).bal)
    {
        cout<<"\nYES";
    }
    else{cout<<"\nNO";}
    cout<<"\n HERE:"<<p.height<<"::"<<p.diameter;
    cout<<"\n HERE CHILD SUM::\t"<<rep(root->right);
    cout<<"\n NO \t"<<count(root)<<endl;
    cout<<"Sum\t"<<sum(root);
    cout<<"\nDia"<<dia(root);
    cout<<"\nSeached"<<sea(root,40);

}
