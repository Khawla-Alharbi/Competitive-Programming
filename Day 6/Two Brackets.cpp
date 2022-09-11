//https://vjudge.net/problem/CodeForces-1452C


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1

int n; cin>>n;
while (n--) {
//stack<char>st;
string s; cin>>s;
int cnt1=0,cnt2=0,res=0;
for (int i = 0; i < s.size(); i++) {
  if (s[i]=='(') {
    cnt1++;
  }else if (s[i]=='[') {
    cnt2++;
  }else if (s[i]==')'&&cnt1>0){
    cnt1--;
    res++;
    
  }else if(s[i]==']'&&cnt2>0) {
    cnt2--;
    res++;

  }
}
cout<<res<<'\n';
}

return 0;

  }
