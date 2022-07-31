//J - Very Very Primitive Game

#include <bits/stdc++.h>
using namespace std;

int main()
{

  string a= "Aoki", t= "Takahashi";
  int aa, b,c;
  cin>>aa>>b>>c;
  if (c==0) {
    if(aa > b){
      cout<<t;
    }else{
      cout<<a;
    }
  }
  if (c==1) {
    if(aa < b){
      cout<<a;
    }else{
      cout<<t;
    }
  }


  return 0;
}
