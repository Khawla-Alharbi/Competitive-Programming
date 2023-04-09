#include <bits/stdc++.h>
using namespace std;
#define Khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  Khawla

  queue<pair<int,int>> q;
  int n,m,res;
  cin>>n>>m;
  int x ;
  for (int i = 1; i <= n; i++) {
    cin>>x;
    q.push({i,x});
  }
  while (q.size()>1) {
    if(q.front().second> m){q.push({q.front().first,q.front().second-m});}
    q.pop();
  }
  cout<<q.front().first;
  return 0;
}
