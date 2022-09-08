//https://codeforces.com/gym/101744/problem/M

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n ,m;
    cin>>n>>m;
   char ar[n][m];
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    cin>>ar[i][j];
  }
}
  int l=1,max=0,coins=0,temp=0;
   for (int i = 0; i < n; i++) {
     if(l==1){
       for (int j = 0; j < m; j++) {

         if (ar[i][j]=='.') {
           coins++;

        
         }else if(ar[i][j]=='L'){
           if (max<coins) {
             max=coins;
           }
           coins=0;
         }

         if (max<coins) {
           max=coins;
         }
       }
     }else{
       for (int j = m-1; j >= 0; j--) {

         if (ar[i][j]=='.') {
           coins++;
         }else if(ar[i][j]=='L'){
           if (max<coins) {
             max=coins;
           }
           coins=0;
         }
         if (max<coins) {
           max=coins;
         }
       }
     }
    if (l==1) {
      l=0;
    }else{l=1;}


   }
   cout<<max;











    return 0;
}
