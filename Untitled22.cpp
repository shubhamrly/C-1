#include<bits/stdc++.h>
using namespace std;
int dele(int a[],int n)
{  unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
      m[a[i]]++;
    }int maxa=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        maxa=max(maxa,it->second);
    }
    cout<<n-maxa;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8},n=8;
    dele(a,n);
}
