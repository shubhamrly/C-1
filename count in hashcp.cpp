#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2, 10, 100, 2, 10, 11,2},n=sizeof(a)/sizeof(int);
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }int c=0,res=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
      if(it->second>c)
      {
          c=it->second;
          res=it->first;
      }
    }cout<<res;


    }
