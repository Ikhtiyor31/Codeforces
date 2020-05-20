#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;

	
int main() { 

	
  int tt;
  cin >> tt;
  int count = 1;
  while(tt--) {

    string name; 
    cin >> name;
    if(mp.count(name)) {
    	mp[name]++;
    	cout << name << mp[name] << "\n";
    	
    } else {
    	cout << "OK" << "\n";
    	mp[name] = 0;
    }

  }
	return 0;
}
