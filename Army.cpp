//Army

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n,now,dream,sum=0;
cin>>n;
int d[n-1];
for (int i = 0; i < n-1; i++) {
  cin>>d[i];
}
cin>>now>>dream;
for (int i = now; i < dream; i++) {
 sum+=d[i-1];


}
cout<<sum;
return 0;
}
