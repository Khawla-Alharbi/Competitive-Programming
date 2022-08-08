//H - Two Arrays And Swaps

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int t,n,k;
cin>>t;
while (t--) {
  int sum=0;
  cin>>n>>k;
  int a[n],b[n];
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  for (int i = 0; i < n; i++) {
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b, b + n, greater<int>());
  for (int i = 0; i < n; i++) {
    if(k==0){sum+=a[i]; continue;} 
    if(a[i]<b[i]){
      swap(a[i],b[i]);
      k--;
    }
    sum+=a[i];
  }
  cout<<sum<<endl;
}

return 0;
}
