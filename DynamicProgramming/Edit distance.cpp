#include <bits/stdc++.h>
typedef long long ll;
#define prDouble(x) cout << fixed << setprecision(10) << x
const int MOD = 1e9 + 7;
using namespace std;
const int maxn = 1e6;
const int INF = 1e9+5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s;
    cin >> t;
    int n = s.size();
    int m = t.size();
    int dp[n+1][m+1];
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++) 
         dp[i][0] = i;
    for(int j = 1; j <= m; j++) 
            dp[0][j] = j;
        
    for(int i = 1; i <= n; i++) {
        for(int  j = 1; j <= m; j++) {
             dp[i][j] = 1e9+5;
            if(s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1];
                continue;
            }
            dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
        }
    }
    cout << dp[n][m] << "\n";
    return 0;
 
}
