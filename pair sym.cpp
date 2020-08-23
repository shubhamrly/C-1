#include<bits/stdc++.h>
using namespace std;
void print(int a[][2],int n)
{
    unordered_map<int ,int >m;
    for(int i=0;i<n;i++)
    {
        int first=a[i][0],sec=a[i][1];
        if(m.find(first)!=m.end()&&m[first]==sec)
        {
            cout<<sec<<" "<<first<<" "<<endl;
        }
        else{m[sec]=first;}
    }
}
int main()
{
int arr[5][2];
    arr[0][0] = 11; arr[0][1] = 20;
    arr[1][0] = 30; arr[1][1] = 40;
    arr[2][0] = 5;  arr[2][1] = 10;
    arr[3][0] = 40;  arr[3][1] = 30;
    arr[4][0] = 10;  arr[4][1] = 5;
    print(arr,5);
}
