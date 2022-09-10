//the hardest  till  now :}
//https://codeforces.com/problemset/problem/1090/A


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1

 ll max=0, index=0,n;cin>>n;
 int maxar[n]={0};
 vector<ll> company[n];
 for (int i = 0; i < n; i++) {
   int k; cin>>k;
   for (int j = 0; j < k; j++) {
     int x; cin>>x;
     company[i].push_back(x);
     if (x>maxar[i]) {
       maxar[i]=x;
     }
     if (x>max) {
       max=x;
       index=i;
     }
   }

 }
ll sum= 0;
 for (int i = 0; i < n; i++) {
   if (i==index) {
     continue;
   }
  sum+=((max-maxar[i])*company[i].size());
 }

 cout<<sum<<endl;

return 0;

  }
