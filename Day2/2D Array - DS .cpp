//https://vjudge.net/problem/HackerRank-2d-array


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

uqu1

 int ar[6][6];
 for (int i = 0; i < 6; i++) {
   for (int j = 0;j < 6; j++) {
     cin>>ar[i][j];
   }
 }
int maxx=-7*9,sum=0;
for (int i = 0; i < 4; i++) {

  for (int j = 0; j < 4; j++) {
    sum=0;
    sum+=(ar[i][j]+ar[i][j+1]+ar[i][j+2])+(ar[i+1][j+1])+(ar[i+2][j]+ar[i+2][j+1]+ar[i+2][j+2]);
    maxx=max(sum,maxx);
  }
}
cout<<maxx;
return 0;

  }
