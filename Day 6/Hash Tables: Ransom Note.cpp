//#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define uqu1 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
  uqu1
int n,m; cin>>n>>m;
std::map<string, int> map;
/*if (n<m) {
  cout<<"No";
  return 0;
}*/
string s1[n], s2[m];
int cnt=m;
for (int i = 0; i < n; i++) {
cin>>s1[i];
if (map[s1[i]]) {
  int temp=map[s1[i]];
  temp++;
  map[s1[i]]=temp;
}else{
  map[s1[i]]=1;
}

}
for (int i = 0; i < m; i++) {
cin>>s2[i];
if (map[s2[i]]>0) {
  cnt--;
  map[s2[i]]-=1;
}
}
/*int cnt =m, no[n]={0},found=0;
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
    if ((s2[i]==s1[j])&& (no[j]==0)) {
      cnt--;
      no[j]++;
      break;

    }
  }

}*/
if (cnt==0) {
  cout<<"Yes";
}else{cout<<"No";}
    return 0;
}
