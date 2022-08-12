//K - Arrival of the General

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n,h=0,l=0;
cin>>n;
int a[n];
for (int i = 0; i < n; i++) {
  cin>>a[i];
  if(a[i]>a[h]) h=i;
  if(a[i]<=a[l]) l=i;
}


cout<<h+(n-1-l)-(l<h? 1 : 0);

return 0;
}
