//https://vjudge.net/problem/HackerRank-electronics-shop

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int b, k,u;
    cin>>b>>k>>u;
    int ark[k],aru[u];
    for (int i = 0; i < k; i++) {
      cin>>ark[i];
      }

    for (int i = 0; i < u; i++) {
      cin>>aru[i];}

    int res=-1, maxx=0;
for (int i = 0; i < k; i++) {
  for (int j = 0; j < u; j++) {
    if (ark[i]+aru[j]<=b) {
      maxx=max(maxx,ark[i]+aru[j]);
      res=maxx;
    }
  }
}
cout<<res;


    return 0;
}
