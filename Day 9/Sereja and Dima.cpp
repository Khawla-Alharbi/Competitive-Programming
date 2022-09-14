//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 311111
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int least=1000000000;
int ans=0;
bool found=0;

int main()
{
khawla
int n,x,s=0,d=0; cin>>n;
bool isS=true;
deque<int> dq;
for (int i = 0; i < n; i++) {
  cin>>x;
  dq.push_back(x);
}
for (int i = 0; i < n; i++) {
  if (isS) {
    if (dq.front()>dq.back()) {
      s+= dq.front();
      dq.pop_front();
    }else{
      s+= dq.back();
      dq.pop_back();
    }

    isS=false;
  }else{
    if (dq.front()>dq.back()) {
      d+= dq.front();
      dq.pop_front();
    }else{
      d+= dq.back();
      dq.pop_back();
    }
     isS=true;
  }
}
cout<<s<<" "<<d;
return 0;
}
