//C - Translation
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla

string s,t,ans="YES";
cin>>s>>t;
int n=s.size()-1;
for (int i = 0; i < s.size(); i++) {
  if(s[i]!=t[n]){
    ans="NO";
    break;
  }
  n--;
}
cout<<ans;
return 0;
}
