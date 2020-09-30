#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) {
     ll a, b;
     cin >> a >> b;
    
     if((a + b) %  3 == 0 && 2 * a >= b && 2 * b >= a) {
     	cout << "YES" << '\n';
     } else {
     	cout << "NO" << '\n';
     }

      
    }
	return 0;
}
