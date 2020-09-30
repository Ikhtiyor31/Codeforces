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
    int n = s.size();
    vector<int> flag(26);
    for(int c: s) {
    	flag[c-'A']++;
      
    }
    string take;
    string left_half;
    int c = 0;
    for(int i = 0; i < 26; i++) {
        c += flag[i] & 1;
    }
    if(c > 1) {
     cout << "NO SOLUTION" << '\n';
     return 0;
    }
    for(int i = 0; i < 26; i++) {
    	//cout << flag[i] << " ";
    	if(flag[i] & 1 ^ 1) {
          for(int  j = 0; j < flag[i] / 2; j++) {

          	cout << (char)(i + 'A');
          	left_half += (char)(i + 'A');
          }
    	}
    } 
    for(int i = 0; i < 26; i++) {
    	if(flag[i]&1) {
    		for(int j = 0; j < flag[i]; j++) {
    			cout << (char)(i + 'A');
    		}
    	}
    }
    // print it in the center of palindrome string since it is odd characters length of strings
   
    sort(left_half.rbegin(), left_half.rend());
    cout << left_half << "\n";
	return 0;

}
