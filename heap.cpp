#include<bits/stdc++.h>
using namespace std;
class heap
{
    vector<int >v;
    bool minheap;


    bool compare(int a,int b)
    {
        if(minheap==true)
        {
            return (a<b);
        }
        else{return (a>b);}
    }
    public:
        heap(bool type=true)
    {
        minheap=type;
        v.push_back(-1);
    }
    void push(int data)
    {
        v.push_back(data);
        int index=v.size()-1;
        int parent=index/2;
        while(index>1&&compare(v[index],v[parent]))
        {
            swap(v[index],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }
    int top()
    {
       return v[1];
    }
    bool empty()
    {
        return (v.size()==1);
    }

void heapify(int i)
{
    int left=2*i;int right=2*i+1;
    int mini=i ;
    if(left<v.size()&&compare(v[left],v[i]))
       {
           mini=left;
       }
        if(right<v.size()&&compare(v[right],v[mini]))
        {
            mini=right;
        }
        if(mini!=i)
        {
            swap(v[i],v[mini]);
            heapify(mini);
        }
}
void pop()
{
    int last=v.size()-1;
    swap(v[1],v[last]);
    v.pop_back();
    heapify(1);
}
};
int main()
{
    heap h;
    h.push(5);h.push(15);h.push(2);h.push(20);h.push(3);
    while(!h.empty())
    {


    cout<<h.top()<<" ";h.pop();
}}
