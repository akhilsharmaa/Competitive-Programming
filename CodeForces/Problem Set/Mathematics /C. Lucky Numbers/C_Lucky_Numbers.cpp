#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
	
	int n; cin >> n;
	
	ll sum =0,  two = 1;
	for (int i = 0; i < n; ++i){
		two *= 2;
		sum += two;
	}
	
	cout << sum << endl;

}

int main(){

	// For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();
   

   return 0;
}
		