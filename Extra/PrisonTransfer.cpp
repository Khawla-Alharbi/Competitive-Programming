#include <bits/stdc++.h>
using namespace std;
#define Khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  Khawla

  int n,t,c,cnt=0,ans=0; cin>>n>>t>>c;
  vector<int>v(n);
  for (int i = 0; i < n; i++){
    cin>>v[i];
    if (v[i]<=t)cnt++; else cnt=0;
    if (cnt>=c) ans++;

  }
   cout<<ans;
  return 0;
}
