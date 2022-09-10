//Ada and Queue

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
  int q;
  bool r=0;
  cin>>q;
  deque<int>dq;
  while (q--) {
    string s; cin>>s;
    if ((s=="back"&&r==0)||(s=="front"&&r==1)) {
      if (dq.empty()) {
        cout<<"No job for Ada?\n";
      }else{
      cout<<dq.back()<<'\n';
      dq.pop_back();}
    }else if ((s=="front"&&r==0)||(s=="back"&&r==1)) {
      if (dq.empty()) {
        cout<<"No job for Ada?\n";
      }else{
      cout<<dq.front()<<'\n';
      dq.pop_front();}
    }else if (s=="reverse") {
      r= !r;
    }else if ((s=="push_back"&&r==0)||(s=="toFront"&&r==1)) {
      int x; cin>>x;
      dq.push_back(x);
    }else if ((s=="toFront"&&r==0)||(s=="push_back"&&r==1)) {
      int k; cin>>k;
      dq.push_front(k);
    }



  }


    return 0;
}
