#include <bits/stdc++.h>
typedef long long ll;
const int MOD = 1e9 + 7;
using namespace std;
ll maxn = 1e5 + 5;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    map<int, int> mp;
    mp[0]++;
    int ans =0;
    int pref = 0;
    int powerof_ten = 1;
    for(int i = s.size()-1; i >= 0; i--) {
    	int digit = s[i] - '0';
        pref = (pref + powerof_ten * digit) % 2019;
        powerof_ten = 10 * powerof_ten % 2019;
        ans += mp[pref];
        mp[pref]++;
   
    }

    cout << ans << "\n";
    return 0;
 
}
