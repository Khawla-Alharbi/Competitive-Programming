//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int ub(int n){
  int h=1;
  for (int i = 1; i <= n; i++) {
  if(i%2==0){
      h=h+1;

    }else{
      h=h*2;
    }
    }
  return h;
}
int main()
{
khawla

int n,c;
cin>>n;
for (int i = 0; i < n; i++) {
  cin>>c;
  cout<<ub(c)<<endl;
}



return 0;
}
