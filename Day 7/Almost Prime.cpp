//https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[3001]={0};


int main()
{

  uqu1
  int n; cin>>n;
  for (int i = 1; i < 3001; i++) {
    bool prime= true;
    for (int j = 2; j < i; j++) {
      if (i%j==0) {
        prime=false;
        break;
      }
    }
    if (prime) {
      far[i]=1;
    }
  }
/*  for (int i = 1; i < 3001; i++) {
  cout<<"num"<<i<<"prim?"<<far[i]<<endl;
}*/
int cnt=0,res=0;
for (int i = 2; i <= n; i++) {
  cnt=0;


  for (int j = 2; j <n; j++) {
    if ((i%j==0)&&(far[j]==1)) {
      cnt++;
    //  cout<<"here i= "<<i<<"here j= "<<j<<endl;
        }
  }
  if (cnt == 2) {
    res++;
    //cout<<"almost is "<<i<<endl;
  }
}
cout<<res;
    return 0;
}
