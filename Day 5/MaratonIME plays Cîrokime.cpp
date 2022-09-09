//https://codeforces.com/gym/101744/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n,res=1;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++) {
      cin>>ar[i];
    }
while (n!=1) {
  n = floor(n/2);

  res++;
}
   cout<<res;


    return 0;
}
