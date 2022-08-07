//J - Vanya and Cubes

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n,lv=0;
cin>>n;
for (int i = 1; ; i++) {
  int need=0;
  for (int j = 1; j <=i; j++) {
    need+=j;
  }if (need<=n) {
    n-=need;
    lv++;
  }else break;
}
cout<<lv;
return 0;
}
