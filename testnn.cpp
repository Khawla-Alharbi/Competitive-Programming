#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("O3")
#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define ln             cout << endl;
#define FOR(i,x,y) for(int i=x;i<=y;++i)

const int range_from  = 2;
const int range_to    = 1000;
int  mod = LONG_LONG_MAX;
inline long long power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x = ((x % mod) * (a % mod)) % mod;
        a = ((a % mod ) * ( a % mod) ) % mod;
        b >>= 1;
    }
    return x % mod;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;
vector<int> graph[N + 1];
int clr[N + 1];
inline void solve() {
/////////////////////////////////////////////////////////////////////////////
    int n; cin >> n;
    int mx = 0;
    vector<int> arr[n];
    for (int i = 0; i < n; ++i) {
        int m; cin >> m;
        for (int j = 0; j < m; ++j) {
            int val; cin >> val;
            arr[i].push_back(val);
            mx = max(mx, val);
        }

    }
    for (int i = 0; i < n; ++i) {
        std::sort(arr[i].begin(), arr[i].end(), greater<>());
    }
    int ans = 0;
    for (int i = 0; i < n ; ++i) {
        bool is = true;
//        bug(arr[i].size());
        if(mx != arr[i][0]){
            ans+= (mx - arr[i][0]) * arr[i].size();
        }
    }
    cout << ans << endl;
/////////////////////////////////////////////////////////////////////////////
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    clock_t z = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
//    cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}

 		  	      					 				       		
