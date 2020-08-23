#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n,int sum)
{int l=0,e=n-1;
    while(l<e)
{
    if(a[l]+a[e]==sum)
    {
        cout<<a[l]<<","<<a[e]<<endl;l++,e--;
    }
    if(a[l]+a[e]<sum)
    {
        l++;
    }

    if(a[l]+a[e]>sum)
    {
        e++;
    }

}

}
int main()
{
int a[]={2,2,3,1,4,0},n=6;int sum=4;
sort(a,a+n);
print(a,n,sum);
}
