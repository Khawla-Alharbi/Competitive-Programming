//https://codeforces.com/gym/101744/problem/L

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n ,res= 0,index;
    cin>>n;
   ll ar[n], maxx=0;

   for (int i = 0; i < n; ++i) {
     cin>>ar[i];
      maxx=max(ar[i],maxx);

   }

    for (int i = 0; i < n; i++) {
      if (ar[i]==maxx) {
        res++;
        index=i+1;

      }
    }

if (index>0 && res==1) {
  cout<<index;
}else{
  cout<<-1;
}






    return 0;
}
