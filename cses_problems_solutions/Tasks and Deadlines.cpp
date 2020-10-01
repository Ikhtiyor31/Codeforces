#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++)
         cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end());
    ll ans = 0, t = 0;
    for(int i  = 0; i < n; i++) {
    	 t += arr[i].first;
         ans += arr[i].second - t;
    } 
    cout << ans << "\n";
	return 0;

}
