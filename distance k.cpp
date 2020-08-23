#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={1, 2, 3, 4, 4},n=sizeof(a)/sizeof(int);
bool s=false;int k=3;
unordered_map<int,int>m;
for(int i=0;i<n;i++)
{
    if(m.find(a[i])!=m.end()&& i-m[a[i]]<=k)
    {
       s=true;
    }
    m[a[i]]=i;
}
cout<<(int)s;
}
