//Binary Search - Advanced 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int bs(int ar[],int low,int mid,int hi,int k,bool first){
  int ans=-1;
  while (low<=hi) {

    mid=(low+hi)/2;
    if (ar[mid]==k) {
      ans=mid;
      if (first) {
        hi= mid-1;
      }else{
        low= mid+1;
      }
    }else if (ar[mid]>k) {
      hi= mid-1;
    }else{
      low= mid+1;
    }
  }
return ans;
}
int main()
{
  uqu1
 int n; cin>>n;
 int ar[n];
 for (int i = 0; i < n; i++) {
  cin>>ar[i];
 }
 int k; cin>>k;
 int mid=n/2;
 int f= bs(ar,0,mid,n-1,k,true);
 int s= bs(ar,0,mid,n-1,k,false);

 if (f== -1 || s== -1) {
   cout<<f<<" "<<s<<" "<<0;
 }else{
   cout<<f<<" "<<s<<" "<<(s+1)-f;
 }
    return 0;
}
