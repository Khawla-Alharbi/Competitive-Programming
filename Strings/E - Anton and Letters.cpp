//E - Anton and Letters

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int ans=0,arr[26]={0};
string s;
getline(cin,s);

for (int i = 1; i < s.size()-1; i++) {
  if (s[i]>='a'&&s[i]<='z') {
    arr[s[i]-'a']++;
  }}
  for (int i = 0; i < 26; i++) {
    if(arr[i]) ans++;
  }

cout<<ans<<endl;
return 0;
}
