#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  khawla

int t; cin>>t;
while(t--){
  int n,m; cin>>n>>m;
  int x[m],y[m];
  int zx[n] ={0};
  int zy[n] ={0};

  for (int i = 0; i < m; i++) {
    cin>>x[i]>>y[i];
    int xx=x[i] , yy=y[i];
    zx[xx-1]=1;
    zy[yy-1]=1;
  }

  string res="No";
  for (int i = 0; i < m; i++) {
    int rx= x[i], ry= y[i];

    if(rx != n){
    
      if(zx[rx]==0){
        res="Yes";
        break;
      }
    }

    if(rx != 1){
      if(zx[rx-2]==0){
        res="Yes";
        break;
      }
    }

    if(ry != n){
      if(zy[ry]==0){
        res="Yes";
        break;
      }
    }

    if(ry != 1){
      if(zy[ry-2]==0){
        res="Yes";
        break;
      }
    }

  }
  cout<<res<<'\n';

}
return 0;
}
