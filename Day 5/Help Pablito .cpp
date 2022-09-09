//https://vjudge.net/problem/Gym-101744A/origin

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n ;
    cin>>n;
while (n--) {
  ll a,b;
  cin>>a;
  cin>>b;

  if (__gcd(a,b)==1) {
      cout<<"Nao"<<"\n";

  }else{
     cout<<"Sim"<<"\n";
  }
}

    return 0;
}
