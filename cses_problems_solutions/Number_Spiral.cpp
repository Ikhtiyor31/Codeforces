#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll maxn = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    for(int i = 0; i < tt; i++) {
    	ll row, col;
    	cin >> row >> col;
    	if(row > col) {
    		if(row % 2 == 0) {
    		 cout << row * row - col + 1 << "\n";	
    		} else {
    			row--;
    			cout <<  row * row + col << "\n";
    		}
    	} else {
    		if(col % 2 == 0) {
    			col--;
    			cout << col * col + row << "\n";
    		} else {
    			cout << col * col - row + 1 << "\n";
    		}
    	}
    }
	return 0;
}
