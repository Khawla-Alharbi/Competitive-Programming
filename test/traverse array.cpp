//كود يقرأ المصفوفة من اليسار لليمين ثم العكس
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
  //  int n ,m;
    //cin>>n>>m;
   //char ar[n][m];
   int aar[3]={8,9,10}, l=1;
   for (int i = 0; i < 3; i++) {
     if(l==1){
       for (int j = 0; j < 3; j++) {
         cout<<aar[j]<<endl;
         cout<<"here i: "<<i<<"here j: "<<j<<endl;
       }
     }else{
       for (int j = 3-1; j >= 0; j--) {
         cout<<aar[j]<<endl;
         cout<<"here i: "<<i<<"here j: "<<j<<endl;
       }
     }
    if (l==1) {
      l=0;
    }else{l=1;}


   }

   /*for(int i=0 ; i<n ;++i){
        for(int j=0 ; j<m ;++j){
            cin>>ar[i][j];
        }
    }
    int coins, max=0,flag=0,j=0;
  /*  for (int i = 0; i < n; i++) {

        if (ar[i][j]=='.') {
          coins++;
        }else if(ar[i][j]=='L'){
          if (coins>max) {
            max=coins;
          }
          coins=0;
        }*/









    return 0;
}
