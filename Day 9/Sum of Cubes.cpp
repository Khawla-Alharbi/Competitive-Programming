//1490C - Sum of Cubes

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int far[1050]={0};
std::vector<ll> v;
int visited[100001];
int mmax=0;
ll mn= 5000000000, n;
void solve(){
for (ll i = 1; i <= 10001; i++) {
    v.push_back(i*i*i);
}

}

int main()
{

  uqu1

 int x; cin>>x;
while (x--) {
   cin>>n;
   solve();
   bool f= false;
   for (int i = 0; i < v.size(); i++) {
     ll brot= v[i];
     ll arot= n-brot;
     if (binary_search(v.begin(), v.end(),arot)) {
       cout<<"YES"<<'\n';
       f=true;
       break;
     }
   }
if (!f) {
  cout<<"NO"<<'\n';
}

 }

 //sort(v.begin(), v.end());


    return 0;
}
