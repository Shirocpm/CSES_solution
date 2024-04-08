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
  cin >> n;
  cout << n << " ";
  while(n != 1)
  {
    if(n % 2 == 0) n = n / 2;
		else           n = n * 3 + 1;
  }
  cout << n << " ";
}
signed main(){IOS solve(); return 0;}
