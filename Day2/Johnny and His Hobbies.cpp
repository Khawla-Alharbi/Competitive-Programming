//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[3001]={0};


int main()
{

  uqu1
  int t; cin>>t;
  while (t--) {

int n; cin>>n;
int x,ans= -1;

set<int> us;
//int ar[n];
for (int i = 0; i < n; i++) {
  cin>>x;
  us.emplace(x);
}

for (int i = 1; i < 1024; i++) {
  auto it = us.begin();
  set<int> newset;
  while (it!=us.end()) {
    int z= i^ *it;
    newset.emplace(z);
    it++;
  }
  if (newset==us) {
    //found =true;
    ans=i;
    break;
  }


}

cout<<ans<<"\n";}
    return 0;
}
