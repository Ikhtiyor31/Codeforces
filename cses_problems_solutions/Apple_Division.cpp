#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    
    
    ll arr[n];

    ll sum = 0;
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
    	sum += arr[i];
    }
    if(n == 1) {
     cout << arr[0]<< '\n';
     return 0;
    }

    ll min_one = 1e9;
    for(int i = 0; i < (1 << n); i++) {
    	ll curr_sum = 0;
    	for(int j = 0; j < n; j++) {
    		if(i & (1 << j)) {
    			curr_sum += arr[j];

    			if(curr_sum <= sum/2) 
                    min_one = min(min_one, (sum - curr_sum) - curr_sum);
    		} 
    	}
    
    }
    cout << min_one << "\n";
	return 0;

}
