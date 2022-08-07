
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{

khawla
int g,n,is[3]={0},car=0,cnt=0;
cin>>g;
while (g--) {
  cin>>n;
  if (n<4) {
    is[n-1]++;
  }else{car++;}
}

while(is[2]){
  if(is[0]){is[0]--;}
  car++;
  is[2]--;
}


while (is[1]) {
  if(is[1]>1){is[1]-=2; car++; continue;}
  if(is[0]>=2){is[0]-=2;}else if(is[0]){is[0]--;}
  car++;
  is[1]--;
}


while (is[0]) {
  if(is[0]>4){ car+=(is[0]/4); is[0]=is[0]%4; continue;}

  car++;
  is[0]=0;
}


cout<<car;
return 0;
}
