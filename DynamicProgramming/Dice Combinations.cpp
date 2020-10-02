#include <bits/stdc++.h>
typedef long long ll;
#define prDouble(x) cout << fixed << setprecision(10) << x
const int MOD = 1e9 + 7;
using namespace std;
const int maxn = 1e6;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int dp[n+1];
    fill(dp, dp+n+1, 0);
       dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= min(6,i); j++) {
    	    dp[i] = (dp[i]+dp[i-j]) % MOD;
        }
    }
    cout <<  dp[n] << "\n";
    return 0;
 
}
// problems link: https://cses.fi/problemset/task/1633
