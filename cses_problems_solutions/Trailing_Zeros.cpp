#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    int ans = 0;
    while(n) {
         ans += n / 5;
         n /= 5;
    }
   cout << ans << "\n";
	return 0;
}
