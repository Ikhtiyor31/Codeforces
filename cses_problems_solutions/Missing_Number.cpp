#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    long long n;
    cin >> 	n;
    vector<ll> arr(n);
    long long cal_sum = 0;
    for(int i = 0; i < n-1; i++) {
    	cin >> arr[i];
    	cal_sum += arr[i]; 
    };

    ll actual_sum = n * (n + 1) / 2;
    cout << actual_sum - cal_sum << "\n";
	return 0;
}
