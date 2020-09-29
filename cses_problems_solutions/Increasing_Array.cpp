#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll ans = 0;
	 for(int i = 1; i < n; i++) {
	 	if(arr[i-1] > arr[i])  {
	 		ans += arr[i-1] - arr[i];
	 		arr[i] = arr[i-1];
	 		
	 	}
	 }
    
    cout << ans << "\n";
	return 0;
}
