//https://codeforces.com/gym/101744/problem/H

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n;
    cin>>n;
   int foot[n],chain[n],floor[n];
   double dfc=0.0,sff=0.0;
   for (int i = 0; i < n; ++i) {
    cin>>floor[i];
   }
   for (int i = 0; i < n; ++i) {
    cin>>foot[i];
   }
   for (int i = 0; i < n; ++i) {
    cin>>chain[i];
   }

   for (int i = 0; i < n; i++) {
     int x=(floor[i]-foot[i]);

     sff+=pow(x,2);
   }

   sff=sqrt(sff);

   for (int i = 0; i < n; i++) {
     int x=(floor[i]-chain[i]);

     dfc+=pow(x,2);
   }
dfc=sqrt(dfc);

if (sff<=dfc) {
  cout<<"Yan"<<"\n";
}else{
  cout<<"MaratonIME"<<"\n";
}
    return 0;
}
