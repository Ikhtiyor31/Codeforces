#include <bits/stdc++.h>
typedef long long ll;
#define prDouble(x) cout << fixed << setprecision(10) << x
const int MOD = 1e9 + 7;
using namespace std;
const int maxn = 1e6;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> h(n);
    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<vector<int>> dp(n+1, vector<int>(x+1));
   
   for(int i = 1; i <= n; i++) {
   	   for(int j = 1; j <= x; j++) {
   	   	 if(h[i-1] > j) {
   	   	     dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
   	   	     continue;
   	   	 }
          int take = max(dp[i-1][j], dp[i][j-1]);
          dp[i][j] = max(take, dp[i-1][j-h[i-1]] + s[i-1]);
   	   }
   }
    cout << dp[n][x] << "\n";
    return 0;
 
}
