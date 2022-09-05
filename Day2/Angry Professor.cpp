//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string f(int k,int ar[],int n){
  string res="YES";
  int cnt=0;
  for (int i = 0; i < n; i++) {
   if (ar[i]<=0) {
     cnt++;
    
   }
  }
  if (cnt>=k) {
    res="NO";
  }
  return res;
}
int main()
{
khawla
int t;
cin>>t;
while (t--) {
  int n, k;
  cin>>n>>k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  cout<<f(k,arr,n)<<endl;
}






return 0;
}
