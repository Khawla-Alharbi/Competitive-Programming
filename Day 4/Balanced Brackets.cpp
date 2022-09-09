//https://vjudge.net/problem/HackerRank-balanced-brackets

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n;
    cin>>n;
    while (n--) {
      stack<char> st;
      int yes=1;
      string s; cin>>s;
     for (int i = 0; i < s.size(); i++) {
      if (s.at(i)=='('||s[i]=='{'||s[i]=='[') {
        st.push(s[i]);
      }else if (!st.empty()) {
        char t=st.top();
        if ((s[i]=='}'&& t=='{')||(s[i]==')'&& t=='(')||(s[i]==']'&& t=='[')) {
          st.pop();
        }else{yes=0;break;}
      }else{
        yes=0;
        break;}


     }
    if (yes&&st.size()==0 ) {
      cout<<"YES\n";
    }else{cout<<"NO\n";}
}
    return 0;
}
