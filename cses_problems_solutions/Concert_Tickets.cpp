#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<int> mset;
    for(int i= 0; i < n; i++) {
    	int x;
    	cin >> x;
        mset.insert(x);
    }
    for(int i = 0; i < m; i++) {
    	int x;
    	cin >> x;
    	auto it = mset.lower_bound(x+1);
    	if(it == mset.begin()) {
    		cout << "-1" << "\n";
    	} else {
    		--it;
    		cout << (*it) << "\n";
    		mset.erase(it);
    	}
    }
	return 0;

}
