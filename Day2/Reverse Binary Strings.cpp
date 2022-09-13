//https://codeforces.com/problemset/problem/1437/B


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
khawla
int t; cin>>t;
while (t--) {
  int maxx=0,zeros=0,ones=0,n; cin>>n;
  char ar[n];
  for (int i = 0; i < n; ++i) {
    cin>>ar[i];

  }

  for (int i = 0; i < n-1; ++i) {
    if ((ar[i]=='0')&&(ar[i+1]=='0')) {
      zeros++;
    }
    if ((ar[i]=='1')&&(ar[i+1]=='1')) {
      ones++;
    }
  }
  maxx=max(zeros,ones);
  cout<<maxx<<'\n';
}


return 0;
}
