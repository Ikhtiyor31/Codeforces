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
    int dp[x+1];
    fill(dp, dp+x+1, x+1);
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    dp[0] = 0;
    for(int coin  : arr) {
    	for(int i = 0; i <= x; i++) {
    		if(i >= coin) 
    			dp[i] = min(dp[i], dp[i-coin]+1);
    	}
    	
    } 	
    cout << (dp[x] > x ? -1 : dp[x]) << "\n";
    return 0;
 
}
