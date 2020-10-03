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
    int n;
    cin >> n;
    vector<int> h(n);
    for(int &x: h) {
    	cin >> x;
    }

    vector<int> dp(n, INF);
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
    	for(int j : {i+1, i+2}) {
    		if(j < n) {
    			dp[j] = min(dp[j], dp[i]+abs(h[i]-h[j]));
    			cout << dp[j] << " ";
    		}
    	}
    	cout << "\n";
    }
    cout << dp[n-1] << "\n";
    return 0;
 
}
