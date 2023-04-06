#include <bits/stdc++.h>
using namespace std;
#define test ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  test

int t; cin>>t;
queue<int> q;

while(t--){
   int n,k;
   cin>>n;
   switch (n){
     case 1:
       cin>>k;
       q.push(k);
       break;
     case 2:
       if(!q.empty()) q.pop();
       break;
     case 3:
      if(q.empty()) cout<<"Empty!"<<'\n';
      else cout<<q.front()<<'\n';
      break;}
 }



return 0;
}
