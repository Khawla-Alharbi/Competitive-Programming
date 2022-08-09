//C - Short Substrings

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int t;
cin>>t;
while (t--) {
  string a="", b;
  cin>>b;
  int count = b.size()/2;
  int i = 0;
  while (count--) {

    a+=b[i];
    i+=2;
  }

  a+=b[b.size()-1];
  cout<<a<<endl;
}




return 0;
}
