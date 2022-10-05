//https://codeforces.com/problemset/problem/1144/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 311111
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

std::vector<ll> v;


int main()
{
khawla
int t; cin>>t;
while (t--) {

string s;
cin>>s;
 sort(s.begin(), s.end());
 string res="YES";
 for (int i = 0; i < s.size() -1; i++) {
   if (s[i+1]-s[i] != 1) {
     res="NO";
     break;
   }
 }
 cout<<res<<'\n';
}
return 0;
}
