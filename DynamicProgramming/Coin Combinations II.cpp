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
    vector<vector<int>> dp(n+1, vector<int> (x+1));
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++) {
    	dp[i][0] = 1;
    	for(int j = 1; j <= x; j++) {

    		if(arr[i-1] > j) {
    			dp[i][j] = dp[i-1][j];
    			//debugging
    			//cout << dp[i][j] << " ";
    			continue;
    		}
    		dp[i][j] = (dp[i-1][j] + dp[i][j-arr[i-1]])%MOD;
    		//debugging
           //cout << dp[i][j] << " ";
    	}
    	

    } 	
    
    cout << dp[n][x] << "\n";
    return 0;
 
}
