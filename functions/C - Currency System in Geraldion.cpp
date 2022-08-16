//C - Currency System in Geraldion

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{

khawla
int n,f=0;
cin>>n;
int a[n];

for (int i = 0; i < n; i++) {
 cin>>a[i];
if(a[i]==1)f=1;}
 if(f) cout<<-1;
 else cout<<1;

return 0;
}
