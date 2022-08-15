//F - Palindrome with leading zeros


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool isP(string n){
  int l=0,r=n.size()-1;
  while (l<r) {
    if(n[r]!= n[l]) return false;
    l++;
    r--;  }
  return true;}
int main()
{

khawla
string n;
cin>>n;
int f=0;
for (int i = 0; i <= 9; i++) {
  if(isP(n)){f=1; break;}
  n='0'+n;
}
if(f)cout<<"Yes"<<endl;
else cout<<"No"<<endl;


return 0;
}
