#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n * (n  + 1) / 2 % 2  != 0) {
    	cout << "NO" << "\n";
    	return 0;
    }

    int j;
    if(n % 4) {
    	j = 3;
    } else {
    	j = 4;
    }

    vector<int> v1, v2;
    for(int i = 0; i < (n-1)/4; i++) {
    	v1.push_back(4*i+1+j);
    	v1.push_back(4*i+4+j);
    	v2.push_back(4*i+2+j);
    	v2.push_back(4*i+3+j);
    }

    if(n%4) {
      v1.push_back(1);
      v1.push_back(2);
      v2.push_back(3);
    } else {
       v1.push_back(1);
       v1.push_back(4);
       v2.push_back(2);
       v2.push_back(3);
    }
      cout << "YES" << '\n';
      cout << v1.size() << '\n';
      for(int x: v1) cout << x << " ";
      	cout << '\n';
      cout << v2.size() << "\n";
      for(int x : v2) cout << x << " ";

	return 0;
}
