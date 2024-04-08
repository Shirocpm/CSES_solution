#include<bits/stdc++.h>

#define IOS ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define all(x) x.begin(), x.end()
#define int long long
#define pi pair<int, int >
#define pq priority_queue
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define eb emplace_back
#define mset multiset
#define F first
#define S second

using namespace std;

void solve ()
{
  int n; cin >> n;
  int s = (n * (n + 1)) / 2;
	for (int i = 1; i < n; i++) {cin >> a; s -= a;}
	cout << s;
}
signed main(){IOS solve(); return 0;}
