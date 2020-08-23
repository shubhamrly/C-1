#include<bits/stdc++.h>
using namespace std;
int main()
{
priority_queue<int ,vector<int>,greater<int> > pq;
int a[]={1,2,31,12,4,5},n=6;
for(int i=0;i<n;i++)
{
    pq.push(a[i]);
}
while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}
}
