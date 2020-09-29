#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int l = 0;
    int r = n-1;
    int ans = 0;
    while(l <= r) {
    	
         if((arr[l] + arr[r]) > x){
         	ans++;

         	r--;
         }
         else if(arr[l] + arr[r] <= x) {
         	l++;
         	r--;
         	ans++;
         }
    }
    cout << ans << "\n";
	return 0;
}
