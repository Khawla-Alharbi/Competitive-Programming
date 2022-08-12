//J - Lights Out


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int gr[5][5]={0};

for(int i = 1; i <= 3; i++) {
  for(int j = 1; j <= 3; j++) {
    cin>>gr[i][j];  }  }



for (int i = 1; i <= 3; i++) {
for (int j = 1; j <= 3; j++) {
  int x= gr[i][j]+gr[i-1][j]+gr[i][j-1]+gr[i+1][j]+gr[i][j+1];
  if (x%2) {
    cout<<0;
  }else {cout<<1;}


}
cout<<endl;


}





return 0;
}
