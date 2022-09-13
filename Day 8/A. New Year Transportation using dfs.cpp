//using DFS

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[1050]={0};
string res="NO";
std::vector<int> v[100001];
int visited[100001];
int n;
void df(int node, int cell){
  if (v[node][0]==cell) {
    res="YES";
    return;
  }
  if (v[node][0]==n) {
    return;
  }
//  visited[node]=1;
int x= v[node][0];
      df(x,cell);

  }

int main()
{

  uqu1
int cell,x;
cin>>n>>cell;
for (int i = 1; i < n; i++) {
  cin>>x;

  v[i].push_back(x+i);
  //v[x].push_back(i);
}



  df(1,cell);



cout<<res;
    return 0;
}
