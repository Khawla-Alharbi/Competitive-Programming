#include <bits/stdc++.h>
using namespace std;
#define test ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  test

int t,n,teams;
queue<int> q1;
queue<int> q2;
queue<int> q3;

cin>>t;
for (int i = 0; i < t; i++) {
  cin>>n;
  if(n==1)q1.push(i+1);
  else if(n==2)q2.push(i+1);
  else q3.push(i+1);
}

int least = q1.size();
if(q2.size() < least) least = q2.size();
if(q3.size() < least) least = q3.size();

teams = least;

if (teams) {
  cout<<teams<<'\n';
  for (int i = 0; i < teams; i++) {
    cout<<q1.front()<<" "<<q2.front()<<" "<<q3.front()<<'\n';
    q1.pop();
    q2.pop();
    q3.pop();
  }
}else cout<<teams;





return 0;
}
