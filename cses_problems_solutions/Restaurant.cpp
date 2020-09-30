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
    int arrival[n];
    int leave[n];
    for(int i = 0; i < n; i++) {
     cin >> arrival[i] >> leave[i];
    }
    
    sort(arrival, arrival+n);
    sort(leave, leave+n);
    int max_one = 0;
    int curr_cus = 0;
    int i = 0, j = 0;
    while(i < n && j < n) {
    	if(arrival[i] < leave[j]) {
    		i++;
    		curr_cus += 1;
    	}  else {
    		curr_cus -= 1;
    		j++;
    	}
    	max_one = max(max_one, curr_cus);
    }
    cout << max_one << "\n";
	return 0;

}
