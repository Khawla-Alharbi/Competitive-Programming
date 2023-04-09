#include <bits/stdc++.h>
using namespace std;
#define Khawla ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  Khawla

  int n; cin>>n;
  long long sum=0;
  int cnt=0,temp;
  priority_queue<int,vector<int>,greater<int>> pq;
  for (int i = 0; i < n; i++) {
    cin>>temp;
    if(temp<0) pq.push(temp);
    cnt++;
    sum+=temp;

    while(sum<0){
      sum += abs(pq.top());
      pq.pop();
      cnt--;
    }
  }


  cout<<cnt;
  return 0;
}
