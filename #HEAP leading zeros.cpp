#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    priority_queue<long long >q;
    cin>>n>>k;
    while(n--)
    {   int t;
        cin>>t;
        if(t==1)
        {
            long x,y;cin>>x>>y;
            long long dis=x*x+y*y;
            if(q.size()<k)
            {
                q.push(dis);
            }
           else if(q.top()>dis)
            {
                q.pop();
                q.push(dis);
            }
        }
        else{
            cout<<q.top()<<endl;
        }
    }
}
