//https://www.hackerrank.com/contests/101hack39/challenges/equality-in-a-array/submissions/code/1348380836

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int n,res=0;
    cin>>n;
    int ar[n], arr[100]={0};
    for (int i = 0; i < n; i++) {
      cin>>ar[i];
      arr[ar[i]-1]++;
    }
 int maxx=0;
    for (int i = 0; i < 100; i++) {
      if (arr[i]>maxx) {
        maxx=arr[i];

      }

    }
    cout<<n-maxx;
    return 0;
}
