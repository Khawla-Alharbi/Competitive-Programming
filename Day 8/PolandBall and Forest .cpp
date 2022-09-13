//PolandBall and Forest 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[1050]={0};
std::vector<int> v[100001];
int visited[100001];
void df(int node){
  visited[node]=1;
  for (int i = 0; i < v[node].size(); i++) {
    if (!visited[v[node][i]]) {
      df(v[node][i]);
    }
  }
}
int main()
{

  uqu1
int n,x,cnt=0;
cin>>n;
for (int i = 1; i <= n; i++) {
  cin>>x;

  v[i].push_back(x);
  v[x].push_back(i);
}

for (int i = 1; i <= n; i++) {
  if (!visited[i]) {
    cnt++;
    df(i);
  }
}


cout<<cnt;
    return 0;
}
