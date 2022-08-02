//C - George and Accommodation



#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


int t,p,q,res=0;
cin>>t;
while (t--) {
cin>>p>>q;
if (p<=(q-2)) {
  res++;
}
}
cout<<res;







  return 0;
}
