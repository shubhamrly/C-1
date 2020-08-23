#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;cin>>n;
    int a[n];
    int m[100000];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<100000;i++)
    {
        m[i]=0;
    }int ma=0;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;

    }
    for(int i=0;i<100000;i++)
     {
        ma=max(m[i],ma);}




    cout<<n-ma;
}
