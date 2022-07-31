//B - qwerty


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


int x;
string res;
for (int i = 0; i < 26; i++) {
  cin>>x;
  char k= (char)'a'+(x-1);
  res+=k;
}

cout<<res;







  return 0;
}
