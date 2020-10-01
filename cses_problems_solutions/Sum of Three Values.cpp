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
    array<ll, 2> arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i][0], arr[i][1] = i;
    	sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
    	int l = i + 1;
    	int r = n - 1;
        
    	while(l < r) {
           
              if(!(l < r)) break;    
    		  while(l < r && arr[l][0] + arr[r][0] + arr[i][0] > x )
    		  	r--;
             if(l < r && x == arr[l][0] + arr[r][0] + arr[i][0]) {
             	cout << arr[i][1]+1 << " " << arr[l][1]+1 << " " << arr[r][1]+1 << "\n";
             	return 0;
             }
               l++;

    	}

    }
    cout << "IMPOSSIBLE" << "\n";
    return 0;
 
}
