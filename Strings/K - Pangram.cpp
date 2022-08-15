//K - Pangram

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int n,arr[26]={0};
string s;
cin>>n>>s;
bool g=true;

  for (int i = 0; i < n; i++) {
    s[i]=tolower(s[i]);
    arr[s[i]-'a']++;}
    
    for (int i = 0; i < 26; i++) {
      if(arr[i]==0){
        g=false;
        break;}
    }


if(g==true)cout<<"YES";
else cout<<"NO";
return 0;
}
