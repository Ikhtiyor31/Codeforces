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
    ll arr[n];
    ll sum = 0;
    for(int i = 0; i < n; i++)  {
    	cin >> arr[i], sum += arr[i];
    }
    sort(arr, arr + n);
    cout << (max(sum, 2 * arr[n-1])) << "\n";
	return 0;

}
