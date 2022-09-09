//https://codeforces.com/problemset/problem/1454/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
  int q;
  cin>>q;
  while (q--) {
  int n; cin>>n;
  int ar[n];

  ar[n-1]=1;
  for (int i = 0; i < n-1; i++) {
    ar[i]=2+i;
  }
  for (int i = 0; i < n; i++) {
      cout<<ar[i]<<' ';
  }
  cout<<'\n';
  }


    return 0;
}
