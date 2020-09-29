#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    int n;
    cin >> n;
    if(n == 2 || n == 3){ 
    	cout << "NO SOLUTION" << "\n"; return 0;
    }
    if(n % 2 == 0) {
         for(int i = 2; i <= n; i += 2) 
         	cout << i << " ";
         
         for(int i = 1; i <= n; i += 2) 
         	cout << i << " ";
    } else {
         for(int i = n-1; i >= 1; i -= 2)
         	cout << i << " ";
         for(int i = n; i >= 1; i -= 2)
         	cout << i << " ";
    }
	return 0;
}
