//A - Print Sub-Array
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n,l,r,el;

cin>>n;
int arr[n];

for (int i = 0; i < n; i++) {
  cin>>el;
  arr[i]=el;
}
cin>>l>>r;
int arr2[r];
for (int i = l-1; i < r; i++) {
  cout<<arr[i]<<" ";
}

return 0;
}
