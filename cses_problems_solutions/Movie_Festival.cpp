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
    vector<pair<int, int>> intervals;
    for(int i = 0; i < n; i++) {
    	int x, y;
    	cin >> x >> y;
    	intervals.push_back(make_pair(x, y));
    }

    sort(intervals.begin(), intervals.end(), [&](const pair<int, int> p1, const pair<int,int> p2) {
    	  return p1.first < p2.first;
    });
    int l = 0;
    int r = 1;
    int ans = 0;
    while(r < n) {
    	if(intervals[l].first <= intervals[r].first && intervals[r].second <= intervals[l].second) {
    		l = r;
    		r++;
    		
    	} else if(intervals[l].second > intervals[r].first) {
    		r++;
    		
    	} else if(intervals[l].second <= intervals[r].first) {
    	     ans++;
    		l = r;
    		r++;
    	}
    }
    cout << ans+1 << "\n";
	return 0;

}
