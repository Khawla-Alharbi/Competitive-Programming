//G - Magnets

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n, sum=1;
cin>>n;
string m[n];
cin>>m[0];

  for (int i = 1; i < n; i++) {
    cin>>m[i];
   if(m[i-1][1]==m[i][0]){
     sum++;
   }
  }

cout<<sum;

return 0;
}
