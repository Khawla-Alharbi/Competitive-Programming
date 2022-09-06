//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int re(int n){

  int x;
  cin>>x;
    if(n==1){return x;}
  return x+re(n-1);
}
int main()
{
int t;
cin>>t;
int c=1;
while (t--) {

  int n;
  cin>>n;
  cout<<"Case "<<c<<": "<<re(n)<<endl;
  c++;
}


return 0;
}
