#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={4, 1, 1, 2, 2, 1, 3, 3},n=sizeof(a)/sizeof(int);
    unordered_map<int,int>len,c;int str=0,mx=0,mn=0;
    for(int i=0;i<n;i++)
    {
      int x=a[i];
      if(c[x]==0)
      {
          len[x]=i;
          c[x]=1;
      }
      else{c[x]++;}
      if(c[x]>mx)
      {
          mx=c[x];
          mn=i-len[x]+1;
          str=len[x];
      }
      else if(c[x]==mx&&i-len[x]+1<mn)
      {
          str=len[x];
          mn=i-len[x]+1;

      }
    }

cout<<str<<" "<<mn<<" "<<mx<<endl;
    for(int i=str;i<str+mn;i++)
    {
        cout<<a[i];
    }
}
