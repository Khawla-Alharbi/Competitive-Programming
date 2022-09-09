//https://vjudge.net/problem/HackerRank-designer-pdf-viewer

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int ar[26], maxx=0;
    for (int i = 0; i < 26; i++) {
      cin>>ar[i];
    }
  string s;
  cin>>s;
for (int i = 0; i < s.size(); i++) {
  int x= ar[s.at(i)-'a'];
  maxx=max(maxx,x);
}
cout<<maxx*s.size();
    return 0;
}
