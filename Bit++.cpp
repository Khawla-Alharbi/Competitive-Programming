//D - Bit++


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int x=0,t;
string op;
cin>>t;
while (t--) {
cin>>op;
if (op[1]== '+') {
  x++;
}else{
  x--;
}
}
cout<<x;







  return 0;
}
