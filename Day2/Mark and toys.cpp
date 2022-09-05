//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t,k,sum=0,res=0;
cin>>t>>k;
int ar[t];
for (int i = 0; i < t; i++) {
  cin>>ar[i];
}
sort(ar,ar+t);
for (int i = 0; i < t; i++) {
  sum+=ar[i];
  if(sum <= k){
    res++;
  }else{break;}
}
cout<<res;
return 0;
}
