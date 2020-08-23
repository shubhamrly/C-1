#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2},n=sizeof(a)/sizeof(int);
int mu=0;unordered_map<int,int>m;
for(int i=0;i<n;i++)
{
  if(m.find(a[i])==m.end())
  {
      m[a[i]]=i;
  }
  else{
    mu=max(mu,i-m[a[i]]);
  }
}cout<<mu;
}
