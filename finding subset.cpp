#include<bits/stdc++.h>
using namespace std;

void check(int arr1[],int arr2[],int m,int n)
{

    int t=0;
     unordered_set<int>s;
     for(int i=0;i<m;i++)
     {
         s.insert(arr1[i]);

     }

     for(int i=0;i<n;i++)
     {
         if(s.find(arr2[i])!=s.end())
         {

             t=1;continue;

         }
         if(s.find(arr2[i])==s.end())
         {

             cout<<"NOPE";
             return;

         }


     }
     if(t==1){cout<<"YES";}
     }
int main()
{
    int arr1[] = {10, 5, 2, 23, 19};
    int arr2[] = {19, 5, 3};

    int m = sizeof(arr1)/sizeof(arr1[0]);
     int n = sizeof(arr2)/sizeof(arr2[0]);
check(arr1,arr2,m,n);
}
