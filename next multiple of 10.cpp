#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,a=0,b=0;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        n[i]=n[i]-'0';

    }
    a=(n/10)*10;
    b=a+10;
    if(n-a>b-n)
    {
        cout<<b;

    }
    else{cout<<a;}
}//also
/*#include <iostream>
using namespace std;

int main() {
int t;cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int i=s.length()-1,carry;
    if(s[i]>'5')
    {
        carry=1;
    }
    else{carry=0;}
    s[i--]='0';
    while(carry==1&&i>=0)
    {
        if(s[i]=='9'&&carry==1)
        {
            s[i]='0';carry=1;
        }
        else{
            s[i]++;carry=0;
        }i--;
    }
    if(carry==1){cout<<"1";}
    cout<<s;cout<<endl;}
}*/
