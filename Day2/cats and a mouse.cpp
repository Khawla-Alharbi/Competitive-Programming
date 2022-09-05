//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string f(int x,int y,int z){
  string res="";
  int fd,sd;
  if (x>z) {
   fd= x-z;
 }else{fd= z-x;}

 if (y>z) {
    sd=y-z;
}else{  sd=z-y;}

  if (fd==sd) {
    res="Mouse C";
  }else if(fd<sd){
    res="Cat A";
  }else{res="Cat B";}

  return res;
}
int main()
{
khawla
int t;
cin>>t;
while (t--) {
  int x,y,z;
  cin>>x>>y>>z;

  cout<<f(x,y,z)<<endl;
}






return 0;
}
