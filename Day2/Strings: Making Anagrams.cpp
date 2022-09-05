//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
khawla
string a, b;
int ar[26]={0},br[26]={0};
cin>>a>>b;

int index;
for (int i = 0; i < a.size(); i++) {
  index= a.at(i) - 'a';
  ar[index]++;
}
int res=0;
for (int i = 0; i < b.size(); i++) {
  index= b.at(i) - 'a';
  br[index]++;}

  for (int i = 0; i < 26; i++) {

   if (ar[i]!=br[i]) {
     if (ar[i]>br[i]) {
       res= res+(ar[i]-br[i]);
     }else{res= res+(br[i]-ar[i]);}

}
  }

  cout<<res<<endl;
return 0;
}
