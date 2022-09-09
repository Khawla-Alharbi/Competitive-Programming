//https://vjudge.net/problem/HackerRank-beautiful-days-at-the-movies


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
    int l,r,k;
    cin>>l>>r>>k;
    int res=0;
    for (int i = l; i <= r; i++) {
      string s= to_string(i);
      reverse(s.begin(),s.end());
      int r= stoi(s);
      int d= abs(i - r);
      if (d%k==0) {
        res++;
      }
    }
    cout<<res;
    return 0;
}
