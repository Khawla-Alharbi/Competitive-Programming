//https://vjudge.net/problem/CodeForces-330A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
int n,m; cin>>n>>m;
char ar[n][m];
int cnt=0, all=n*m;
int ra[n]={0}, ca[m]={0};
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
  cin>>ar[i][j];
  if (ar[i][j]=='S') {
    ra[i]=1;
    ca[j]=1;
  }
  }
}

for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
  if (ra[i]==1 && ca[j]==1) {
    cnt++;
  }
  }
}
cout<<all-cnt;
    return 0;
}
