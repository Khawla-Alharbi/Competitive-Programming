//M. The Pleasant Walk


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1

 int n,k;cin>>n>>k;
 int ar[n];
 int ans=1,maxx=1;
 for (int i = 0; i < n; i++) {
  cin>>ar[i];

 }
for (int i = 0; i < n-1; i++) {

  if(ar[i]!=ar[i+1]){
    ans++;
  }else{ans=1;
}

  maxx=max(ans,maxx);
}


cout<<maxx;



return 0;

  }

