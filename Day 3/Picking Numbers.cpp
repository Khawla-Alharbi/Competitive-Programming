//https://vjudge.net/problem/HackerRank-picking-numbers

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
int t;
cin>>t;
int a[t];
for (int i = 0; i < t; i++) {
  cin>>a[i];
}

sort(a,a+t);
int max=0,cnt=1;
int temp=a[0];
for (int i = 1; i < t; i++) {


  if (abs(temp-a[i])<=1) {
    cnt++;

    if (cnt>max) {
      max=cnt;
    }
  }else{cnt=0; temp=a[i]; i--; }

}
cout<<max;


return 0;
}
