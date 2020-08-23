#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={1, 2, 3, 4, 5},n=sizeof(a)/sizeof(int);
int mu=0,k=3,w=0;unordered_map<int,int>m;
for(int i=0;i<n;i++)
{
  if(m.find(a[i])==m.end())
  {
      m[a[i]]=i;
  }
  else{
    mu=max(mu,i-m[a[i]]);


  }
   if(mu<=k)
    {
        w=1;
    }
    else if(mu>k||mu==0) {cout<<"NEWWERR";break;}
}
if(w==1)
{
    cout<<"YES";
}
}
