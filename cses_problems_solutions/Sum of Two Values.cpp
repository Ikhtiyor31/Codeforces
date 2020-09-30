#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x;
    cin >> n >> x;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    map<ll, ll> umap;
    for(int i = 0; i < n; i++) {
    	ll target = x - arr[i];
    	if(umap.count(target)) {
    		cout << umap[target] + 1 << " " << i + 1 << "\n";
    		return 0;
    	}
    	umap[arr[i]] = i;
    }	
    cout << "IMPOSSIBLE" << "\n";
    return 0;

}
