//

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[1050]={0};
std::vector<ll> v;
int visited[100001];
int mmax=0;
ll mn= 5000000000, n;
void solve(ll num){
  if (num > n) {
    return;
  }
  v.push_back(num);
  solve(num*10+4);
  solve(num*10+7);

}

int main()
{

  uqu1
ll res; cin>>n;
 solve(0);
 sort(v.begin(),v.end());
 
auto z = v.begin();
ll i=0;
while (z!=v.end()) {
  if (*z== n) {
    res= i;
    break;
  }
  i++;
  z++;
}
 cout<<res;
    return 0;
}
