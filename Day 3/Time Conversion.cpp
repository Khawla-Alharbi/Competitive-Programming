//

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
string news,s; cin>>s;
string x;
int n= s.size();
string y= s.substr(0,2);
  int z= stoi(y);
if (s[n-2]=='P') {
  if (z==12) {
     news=s.substr(0,8);
  }else{
       x=to_string(z+12);
       news=x+s.substr(2,6);
  }

}else if (s[n-2]=='A') {
  if (z==12) {
    x="00";
    news=x+s.substr(2,6);
  }else{news=s.substr(0,8);}

  }


cout<<news;
    return 0;
}
