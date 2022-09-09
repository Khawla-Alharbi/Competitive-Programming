//https://vjudge.net/problem/HackerRank-funny-string

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
  int q;
  cin>>q;
  while (q--) {
    string s; cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    int ar[s.size()-1], ar2[s.size()-1];
    for (int i = 0; i < s.size()-1; i++) {
      ar[i]=abs((int)s.at(i)-(int)s.at(i+1));
    }
    for (int i = 0; i < r.size()-1; i++) {
      ar2[i]=abs((int)r.at(i)-(int)r.at(i+1));
    }
    bool yes=1;
for (int i = 0; i < s.size()-1; i++) {
  if (ar[i]!=ar2[i]) {
    yes=0;
    break;
  }
  //cout<<" i="<<i<<" ar[i]= "<<ar[i]<<" ar2[i]= "<<ar2[i]<<'\n';
}
if (yes) {
  cout<<"Funny\n";
}else{
    cout<<"Not Funny\n";}
  }


    return 0;
}
