#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1511B - GCD Length 
// Solved Accepted ;) 

int countDigit(int n){
	int cnt =0;
	while(n--){
		cnt++;
		n/= 10;
	}
	return cnt;
}

void solve(){
		
	ll  a, b, c;
	cin >> a >> b >> c;
	
	ll x = 1;
	
	while(countDigit(x) != c){
		x*= 2;
	}	
	
	ll i = x, j = x;
	while(countDigit(i) != a){
		i*= 3;
	}
	
	while(countDigit(j) != b){
		j*= 5;
	}
	
	cout << i << " " << j <<endl;
}

int main(){

	// For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;

   while(tCase--){
       solve();
   }

   return 0;
}
		