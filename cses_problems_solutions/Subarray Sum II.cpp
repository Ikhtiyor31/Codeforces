#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, x;
    cin >> n >> x;
    map<ll, int> map;
    map[0] = 1;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0;  i < n; i++) {
    	ll curr;
    	cin >> curr;
    	sum += curr;
        ans += map[sum-x];
        map[sum]++;
    }
    cout << ans << "\n";
    return 0;
 
}
