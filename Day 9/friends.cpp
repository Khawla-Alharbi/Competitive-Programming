//https://vjudge.net/problem/UVA-10608

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[1050]={0};
string res="NO";
std::vector<int> v[30002];
bool visited[100001];
int cnt=0;

void df(int node){

 visited[node]=true;
 cnt++;
  for (int i = 0; i < v[node].size(); i++) {
    int child= v[node][i];

    if (!visited[child]) {
        //cout<<"child here is "<<child<<endl;
       df(child);
    }

  }


  }

int main()
{

  uqu1
  int t; cin>>t;
  while (t--) {
    cnt=0;
    int n,m, maxx=0;
    cin>>n>>m;
memset(visited,0,sizeof(visited));
for (int i = 0; i <= n; i++) {
  v[i].clear();
}

for (int i = 0; i < m; i++) {
  int p1,p2;
  cin>>p1>>p2;

  v[p1].push_back(p2);
  v[p2].push_back(p1);
}


for (int i = 1; i <= n; i++) {
  if (!visited[i]) {
    cnt=0;
    df(i);
    if (cnt>maxx) {
      maxx=cnt;
    }
  }
}


cout<<maxx<<endl;
}

    return 0;
}
