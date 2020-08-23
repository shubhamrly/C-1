#include<bits/stdc++.h>
using namespace std;
class node{
public:int data;
struct node*next;

};
void push (node**head,int d)
{
    node* n=new node();
    n->data=d;
    n->next=*head;
    *head=n;
}
void store(node*head1,node*head2,unordered_map<int ,int >&ele)
{
    node*p1=head1,*p2=head2;
    while(p1!=NULL||p2!=NULL)
    {
        if(p1!=NULL)
        {
            ele[p1->data]++;
            p1=p1->next;
        }

        if(p2!=NULL)
        {
            ele[p2->data]++;
            p2=p2->next;
        }
    }}
    node*getuni(unordered_map<int ,int>ele)
    {
        node*res=NULL;
        for(auto it=ele.begin();it!=ele.end();it++)
        {
            push(&res,it->first);
        }
        return res;
    }
    node*getint(unordered_map<int ,int>ele)
    {   node*res=NULL;

        for(auto it=ele.begin();it!=ele.end();it++)
        {  if(it->second==2)
            push(&res,it->first);
        }
        return res;
    }
void print(node*temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";temp=temp->next;
    }cout<<endl;
}
int main()
{
    node*h1=NULL,*h2=NULL;
    push(&h1,1);push(&h1,4);push(&h1,234);push(&h1,52);push(&h1,2341);
    push(&h2,1);push(&h2,3);push(&h2,4);
    unordered_map<int ,int >my;
    store(h1,h2,my);
    node*g1=getuni(my);
    node*g2=getint(my);
    print(g1);
    print (g2);
}
