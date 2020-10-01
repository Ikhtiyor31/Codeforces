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
    ll arr[n];
    ll sum = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    ll median = arr[n/2];
    ll ans = 0;
    for(int i = 0; i < n; i++)  {
    	ans += abs(arr[i]-median);
    }
    cout << ans << "\n";
    return 0;

}
