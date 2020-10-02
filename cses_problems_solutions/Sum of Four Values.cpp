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
    map<ll, pair<int, int>> pmap;
    for(int i = 0;  i < n; i++) {
          cin >> arr[i];
    }
    for(int  i =0; i < n; i++) {
          for(int k = i+1; k < n; k++) {
               if(pmap.count(x - (arr[k] + arr[i]))) {
               	    int first = pmap[x - (arr[k] + arr[i])].first;
               	    int second = pmap[x - (arr[k] + arr[i])].second;
               	      cout << i + 1 << " " << k + 1 << " " << first+1 << " " << second+1 << "\n";
               	      return 0;
               }
          }



    	for(int j = 0; j < i; j++) {
    		pmap[arr[i]+arr[j]] = {i, j};
    	}
    }

    cout << "IMPOSSIBLE" << "\n";
    return 0;
 
}
