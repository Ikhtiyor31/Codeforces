#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    
    string s;
    cin >> s;
    int i = 0;
    int j = 1;
    int n = s.size();
    int ans = 1;
    while(i < n) {
        if(s[i] == s[j]) {
        	ans = max(ans, (j - i + 1));
        	j++;
        } else {
        	i = j;
        	j++;
        }
    }
     cout << ans << "\n";
	return 0;
}
