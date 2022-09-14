//


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t; cin>>t;
while (t--) {

int n, cnt=0;
cin>>n;
int far[10001]={0}; ///0 not prime;
for (int i = 2; i < 10001; i++) {
//  bool prime;
  for (int j = 2; j < i; j++) {

    if (i%j==0) {
    //cout<<"here i "<<i<<" j "<<j<<endl;
    //  prime = false;
      far[i]=1;
      break;
    }
  }

}

for (int i = 2; i <= n; i++) {
//  cout<<"i"<<i<<" i % 20 "<<20%i<<endl;
  if (n%i==0) {
    if (far[i]==0) {
      //cout<<" enter here prime div is "<<i<<endl;
      cnt++;
    }
  }
}
cout<<cnt<<'\n';}
return 0;
}
