//https://codeforces.com/gym/101744/problem/J

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n;
    cin>>n;
    int x[n],y[n],r[n];

    for (int i = 0; i < n; i++) {
      cin>>x[i]>>y[i]>>r[i];

    }
    for (int i = 0; i < n; i++) {

      for (int j = i+1; j < n; j++) {
        //int d = pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
        //d=sqrt(d);
        //مانفعت الطريقة اللي فوق عشان الجذر ممكن يطلع كسور
        int rr=r[i]+r[j];
        if (((x[i]-x[j])*(x[i]-x[j])+((y[i]-y[j])*(y[i]-y[j])))==(rr*rr)) {
        
          cout<<i+1<<' '<<j+1<<"\n";
        }
      }
    }

    return 0;
}
