//H - Chewbaсca and Number

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
string n;
cin>>n;

for (int i = 0; i < n.size(); i++) {
  int x= n[i]-'0';

  if ((9-x>=0)&& (9-x < x)) {
      if(i==0&& (9-x ==0)) continue;
    n[i]=9-x+'0';
  }
}
cout<<n;

return 0;
}
