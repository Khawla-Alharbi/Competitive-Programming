//Little Elephant and Candies codechef

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int t,n,c;

cin>>t;
while (t--) {
  int x, sum=0;
  cin>>n>>c;

  for (int i = 0; i < n; i++) {
  cin>>x;
  sum+=x;
  }
  if (sum<=c) cout<<"Yes\n";
  else cout<<"No\n";


}


return 0;
}

