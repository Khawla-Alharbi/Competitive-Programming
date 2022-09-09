//https://codeforces.com/gym/101744/problem/I

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1
int p, t;
cin>>p>>t;
int ar[p];
for (int i = 0; i < p; i++) {
  cin>>ar[i];
}
int sy=0, sn=0, sres=0,nres=0;
for (int i = 0; i < p; i++) {
  if (sy>t) {
    break;
  }
  sy+=ar[i];
  sres++;

}
for (int i = p-1; i >=0 ; i--) {
  if (sn>t) {
    break;
  }
  sn+=ar[i];
  nres++;

}
string res="Nathan";
if (sres>nres) {
  res="Yan";
}if (sres==nres) {
  res="Empate";
}
cout<<res<<endl;


return 0;
}
