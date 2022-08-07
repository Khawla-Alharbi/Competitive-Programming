//G - Wrong Subtraction
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int k;
ll n;

cin>>n>>k;
while(k--) {
if(n%10 == 0){
  n /= 10;
}else{
  n--;
}

}
cout<<n;
return 0;
}
