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
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll max_one = -1e9;
    ll curr_max = -1e9;
    for(int i = 0; i < n; i++) {
    	curr_max = max(curr_max+arr[i], arr[i]);
    	max_one = max(max_one, curr_max);
    }
    cout << max_one << "\n";
    return 0;

}
