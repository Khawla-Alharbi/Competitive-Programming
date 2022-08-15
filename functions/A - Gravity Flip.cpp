//A - Gravity Flip


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int n;


cin>>n;
int s[n];
for (int i = 0; i < n; i++) {
  cin>>s[i];
}
sort(s,s+n);
for (int i = 0; i < n; i++) {
  cout<<s[i]<<" ";
}

return 0;
}
