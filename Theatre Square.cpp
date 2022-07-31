//E - Theatre Square


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,a;

    cin >>m>>n>>a;
long long w,l;
w=m/a;
l=n/a;
if (m%a != 0) {
  w++;
}
if (n%a != 0) {
  l++;
}

cout<<w*l;



  return 0;
}
