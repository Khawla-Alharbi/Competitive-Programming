//https://www.hackerrank.com/contests/womens-codesprint-3/challenges/the-birthday-bar
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n,m,d,res=0;
    cin>>n;
   int ar[n];
   for (int i = 0; i < n; i++) {
     cin>>ar[i];
   }
   cin>>d>>m;
int sum=0;
for (int i = 0; i < n; i++) {
  sum=0;
  for (int j = 0; j < m; j++) {
  sum+=ar[i+j];
  }
  if (sum==d) {
    res++;
  }
}

   cout<<res;
    return 0;
}
