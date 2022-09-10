//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
  int n, k; cin>>n>>k;
  ll ar[n], p[k]={0};
  for (int i = 0; i < n; i++) {
    cin>>ar[i];
  }
 int cnt=0,j=0;
 ll ans=0;
 sort(ar,ar+n,greater<int>());
  for (int i = 0; i <n; i++) {
    if (j>=k) {
      j=0;
    }
    ans+=(ar[i]*(p[j]+1));
    p[j]++;
    cnt++;
    if (cnt==n) {
      break;
    }
   j++;
  }

    cout<<ans;


    return 0;
}
