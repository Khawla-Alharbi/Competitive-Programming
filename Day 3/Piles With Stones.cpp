//https://codeforces.com/problemset/problem/1013/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n;
    cin>>n;
    int ar1[n],ar2[n],s1=0,s2=0;
    for (int i = 0; i < n; i++) {
        cin>>ar1[i];
        s1+=ar1[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>ar2[i];
        s2+=ar2[i];
    }
    if (s2<= s1) {
      cout<<"Yes\n";
    }else{
      cout<<"No\n";
    }

    return 0;
}
