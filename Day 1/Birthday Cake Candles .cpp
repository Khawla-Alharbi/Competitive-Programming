//Birthday Cake Candles 


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n, maxx=0;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++) {
      cin>>ar[i];
      maxx=max(ar[i],maxx);
    }
    int cnt=0;
    for (int i = 0; i < n; i++) {
      if (ar[i]==maxx) {
        cnt++;
      }
    }
cout<<cnt;
    return 0;
}
