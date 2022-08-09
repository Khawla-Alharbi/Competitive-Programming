//I - Shaass and Oskols

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int n, m;
cin>>n;
int a[n];
for (int i = 0; i < n; i++) {
  cin>>a[i];

}
cin>>m;

for (int i = 0; i < m; i++) {


  int x, y;
  cin>>x>>y;
  x--;
  int num= a[x],r=num-y;

  if(x-1>=0){
  a[x-1]+=(num-1)-r;}
  if(x+1<n){
  a[x+1]+=r;}
  a[x]=0;


}
for (int i = 0; i < n; i++) {
    cout<<a[i]<<endl;
}



return 0;
}
