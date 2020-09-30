#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int des_appsize[n];
    int free_appsize[m];
    for(int i = 0; i < n; i++) cin >> des_appsize[i];
    for(int i = 0; i < m; i++) cin >> free_appsize[i];
    sort(des_appsize, des_appsize + n);
    sort(free_appsize, free_appsize + m);
    int i = 0, j = 0;
    int ans = 0;
    while(i < n && j < m) {
    	if(free_appsize[j]-k <= des_appsize[i] &&des_appsize[i] <= free_appsize[j]+k) {
    		i++; j++;
    		ans++;
    	} 
    	else if(des_appsize[i] > free_appsize[j]+k) {
    		j++;
    	} else {
    		i++;
    	}
    }
    cout << ans << "\n";
	return 0;

}
