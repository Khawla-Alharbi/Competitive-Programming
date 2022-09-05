//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t,sum=0,ns=0,res=0;
cin>>t;
int s[t];
for (int i = 0; i < t; i++) {
  cin>>s[i];
  sum+=s[i];
}
for (int i = 0; i < t-1; i++) {
  ns+=s[i];
  if (ns==(sum-ns)) {
    res++;
    
  }
}

cout<<res;
return 0;
}
