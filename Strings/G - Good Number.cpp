//G - Good Number
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int n, k,ans=0;
cin>>n>>k;
string a;
while (n--) {
  bool g=true;
  cin>>a;
  for (int i = 0; i <= k; i++) {

    if(a.find(i+'0')== -1){g=false;break;}
  }
  if (g) {
    ans++;
  }

}
cout<<ans;

return 0;
}
