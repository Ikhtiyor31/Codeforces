#include <bits/stdc++.h>
using namespace std;
char cnt[1000][1000];
int n, m;
void dfs(int row, int col) {
	if(row >= n || col >= m || row < 0 || col < 0 || cnt[row][col] == '#' || cnt[row][col] == '*') {
		return;
	}

	cnt[row][col] = '*'; 
	dfs(row + 1, col);
	dfs(row - 1, col);
	dfs(row, col + 1);
	dfs(row, col - 1);
}
int main()
{  
	 
	 cin >> n >> m;
	
	 for(int i = 0; i < n; i++) {
	 	for(int j = 0; j  < m; j++) {
	 		cin >> cnt[i][j];
	 	}
	 }
	 int ans = 0;
     for(int i = 0; i < n; i++) {
	 	for(int j = 0; j  < m; j++) {
	 	    if(cnt[i][j] != '*' && cnt[i][j] != '#') {
	 	    	ans++;
	 	    	dfs(i, j);
	 	    }
	 	}
	 
	 }
	 cout << ans << "\n";
	return 0;
}
