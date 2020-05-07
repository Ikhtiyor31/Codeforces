#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cardcount(ll card) {
  return ll(card*(3 * card + 1) / 2);
}

int main()  {
      ll n;
     cin >> n;
     vector<ll> nums(n);
     for(int j = 0; j < n; j++) cin >> nums[j];
    
     for(int k = 0; k < n; k++) {
      
        ll take = nums[k];
        ll count = 0;
        ll i = 1;
        ll previous = 0;
        bool check = false;
        while(!check) {

        	ll can = cardcount(i);
        	if(2 > take) {
        		break;
        	}
        	else if(can == take) {
        		count++;
        		break;
        	}else if(can < take) {
        		i++;
        		previous = can;
        	}else if(can > take) {
        		take = take - previous;
        		
        		count++;
        		i = 1;
        		
        	}
        	
        }
        cout << count << "\n";
     }
  
	return 0;
}
