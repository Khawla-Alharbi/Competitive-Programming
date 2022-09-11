//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1

int n; cin>>n;
while (n--) {
  int ar1[26]={0},ar2[26]={0}; string res="NO";
  string s1,s2; cin>>s1>>s2;
  for (int i = 0; i < s1.size(); i++) {
    int x=s1[i]-'a';
    ar1[x]++;
  }

  for (int i = 0; i < s2.size(); i++) {
    int x=s2[i]-'a';
    ar2[x]++;
  }
  for (int i = 0; i < 26; i++) {
    if ((ar1[i]>0)&&(ar2[i]>0)) {
      res="YES";
      break;
    }
  }

  cout<<res<<'\n';
}

return 0;

  }
