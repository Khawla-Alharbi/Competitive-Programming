//A - New Year Transportation


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll N= 10e9;

int main()
{
  uqu1
  int n,cell; cin>>n>>cell;
  int ar[n], can[n+1]={0};
  string res="NO";
  for (int i = 1; i < n; i++) {
  cin>>ar[i];

  }

int start=1;
while (start<cell) {
  start+= ar[start];
  if (start==cell) {
    res="YES";
  }
}




cout<<res;
    return 0;
}

