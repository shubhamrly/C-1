#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={ 2,2,3,1,4,0 },n=6,sum=4,temp=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        temp=sum-a[i];
        if(s.find(temp)!=s.end())
        {
            cout<<temp<<","<<a[i]<<endl;
        }
        s.insert(a[i]);
    }
}
