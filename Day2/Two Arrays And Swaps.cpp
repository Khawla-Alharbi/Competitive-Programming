//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t;
cin>>t;
while (t--) {
int n, k;
cin>>n>>k;
int a[n],b[n];
for (int i = 0; i < n; i++) {
  cin>>a[i];
}
for (int i = 0; i < n; i++) {
  cin>>b[i];
}
sort(a,a+n);
sort(b,b+n,greater<int>());

for (int i = 0; i < k; i++) {
  int temp=a[i];
  if (a[i]<b[i]) {
   a[i]=b[i];
   b[i]=temp;
  }
}
int sum=0;
for (int i = 0; i < n; i++) {
  sum+=a[i];
}
cout<<sum<<endl;  
}

return 0;
}
