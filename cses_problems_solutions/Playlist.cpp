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
    set<ll> st;
    ll arr[n];
    ll mx = 0;
    for(int  i = 0; i < n; i++) cin >> arr[i];
    	int j =0;
    for(int i = 0; i < n; i++) {
    	while(st.count(arr[i])) {
    	 	auto it = st.find(arr[j++]);
    	 	st.erase(it	);
    	 }  
         st.insert(arr[i]);
         mx = max(mx, (ll)st.size()); 

    } 
    cout << mx << "\n";
    return 0;

}
