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
    vector<int> arr;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	int pos = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
    	if(pos < arr.size()) 
    		arr[pos] = x;
    	else 
    		arr.push_back(x);
    }

    cout << arr.size() << "\n";
    return 0;

}
