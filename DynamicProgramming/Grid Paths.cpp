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
    vector<vector<char>> grid(n, vector<char> (n));
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		cin >> grid[i][j];
    	}
    }
    vector<vector<int>> dp(n, vector<int> (n));
    for(int i = 0; i < n; i++) {
    	dp[i][0] = dp[0][i] = 1;
    }
    bool found = false;
    bool found2 = false;
    for(int i = 0; i < n; i++) {
    	if(grid[0][i] == '*' || found) {
    		dp[0][i] = 0;
    		found = true;
    	}
    	if(grid[i][0] == '*' || found2) {
    		dp[i][0] = 0;
    		found2 = true;
    	}
    }

    for(int i = 1; i < n; i++) {
    	for(int j = 1; j < n; j++) {
    		if(grid[i][j] == '*') {
    			dp[i][j] = 0;
    			//cout << dp[i][j] << " ";
    			continue;

    		}
    		dp[i][j] = max(dp[i][j], dp[i-1][j] + dp[i][j-1]) % MOD;
    		//cout << dp[i][j] << " ";
    	}
    	//cout << "\n";
    }
    cout << dp[n-1][n-1] << "\n";
    return 0;
 
}
