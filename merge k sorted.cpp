#include <bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int > >ppi;
vector<int > mergek(vector<vector<int> > arr)
{
    vector<int>out;
    priority_queue<ppi,vector<ppi>,greater<ppi> >pq;
    for(int i=0;i<arr.size();i++ )
        pq.push({arr[i][0],{i,0}});


   while(pq.empty()==false)
    {
        ppi curr=pq.top();pq.pop();
        int i=curr.second.first;
        int j=curr.second.second;

        out.push_back(curr.first);

        if(j+1 < arr[i].size())
           pq.push({arr[i][j+1],{i,j+1}});

    }
    return out;

}

int main() {
    int row,col;cin>>row>>col;
    vector<vector<int> >v;v.resize(row,vector<int>(col));
  for(int i=0;i<row;i++)
  {
       for(int j=0;j<col;j++)
  {
      cin>>v[i][j];
  }}

  vector<int> output=mergek(v);

  for(auto x:output)
  {
      cout<<x<<" ";
  }
}
