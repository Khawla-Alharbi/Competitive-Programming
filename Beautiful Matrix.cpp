//H - Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int r,c,num,one,sc=0,sr=0;
for (int i = 1; i <= 5; i++) {
  for (int j = 1; j <= 5; j++) {
    cin>>num;
    if (num == 1) {
      r=i;
      c=j;
    }
  }
}
if (c>3) {
  sc=c-3;
}else if (c<3) {
  sc=3-c;
}
if (r>3) {
  sr=r-3;
}else if (r<3) {
  sr=3-r;
}

cout<<sr+sc;



return 0;
}
