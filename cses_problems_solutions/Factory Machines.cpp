#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    cin >> n >> t;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll left = 0;
    ll right = 1e18;
    ll s= 0;
    while(left < right) {
    	ll mid = (left + right) / 2;
    	s = 0;
    	for(int i = 0; i < n; i++)
    	 s += min(mid/arr[i], (ll)1e9);
    		if(s >= t) {
    			right = mid;
    		} else {
    			left = mid + 1;
    		}

    }
   cout << left << "\n";
 
    return 0;

}
