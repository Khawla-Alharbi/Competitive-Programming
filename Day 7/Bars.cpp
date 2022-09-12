//https://vjudge.net/contest/514973#problem/F
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//int max=0, sum=0;
string res="NO";
int ar[1000],num;
void solve(int l,int sum, int curr) {
//cout<<sum;
  if (sum>l) {
    return;
  }
  if (sum==l) {
    res="YES";
    return;
  }
 //take
 if (curr>=num) {
   return;
 }
  solve(l,sum+ar[curr], curr+1);

  //leave
  solve(l,sum,curr+1);

}
int main()
{
  uqu1
int n; cin>>n;
while (n--) {

//  int sum=0;
  res="NO";
  int l; cin>>l>>num;
  //int ar[num];
  for (int i = 0; i < num; i++) {
    cin>>ar[i];
  }
  solve(l,0,0);
  cout<<res<<'\n';
}
    return 0;
}
