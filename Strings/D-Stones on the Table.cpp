//D - Stones on the Table

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int n,ans=0;
string stone;
cin>>n;
cin>>stone;
for (int i = 0; i < stone.size()-1; i++) {
  if (stone[i]==stone[i+1]) {
    ans++;
  }
}
cout<<ans;
return 0;
}
