#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int prev[n];
   for(int i = 0; i < n; i++) {
    	prev[i] = i-1;

   	    while(~prev[i] && arr[prev[i]] >= arr[i]) {
   	    	     prev[i] = prev[prev[i]];
   	    }

   	    	cout << prev[i]+1 << " ";
   }
    return 0;
 
}
