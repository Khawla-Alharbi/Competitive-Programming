//I- Taxi
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int g, n,sum=0;
cin>>g;
while(g--){
  cin>>n;
  sum+=n;
}
if (sum%4 != 0) {
  cout<<sum/4+1;
}else{
  cout<<sum/4;
}


return 0;
}
