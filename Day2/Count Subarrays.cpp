//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t;
cin>>t;
while (t--) {
  int n;
  cin>>n;
  int ar[n], res=n;
  for (int i = 0; i < n; i++) {
    cin>>ar[i];
  }
int cnt=0;
  for (int i = 0; i < n-1; i++) {

    if (ar[i]<ar[i+1]) {
      res++;
      cnt++;
    }else{cnt=0;}

    if (cnt>1) {
      res+=(cnt-1);
    }
  }
  cout<<res<<endl;
}
return 0;
}
