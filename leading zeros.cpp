#include<iostream>
using namespace std;
int main()
{   int t;cin>>t;
   while(t--){
    string s,ans="";int f=1;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'&&f==1)
        {
            continue;
        }
        else{f=0;}
        if(f==0&&s[i]!='.')
        {
            ans+=s[i];
        }
        else if(s[i]=='.'){
                int k=ans.length();
            if(ans[k-1]=='.')
            {
                ans+='0';
            }
            ans+=s[i];f=1;
        }

    }cout<<ans<<endl;
}}
