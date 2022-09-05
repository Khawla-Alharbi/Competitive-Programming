//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int del(string s){
  int h=0;
 for (int i = 1; i < s.size(); i++) {
   if (s[i-1]==s[i]) {
     h++;
   }
 }
  return h;
}
int main()
{
khawla

int n;
string ss;
cin>>n;
while (n--) {
  cin>>ss;
  cout<<del(ss)<<endl;
}



return 0;
}
