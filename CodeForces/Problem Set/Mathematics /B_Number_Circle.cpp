#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pNo cout << "NO" << endl; 
#define pYes cout << "YES" << endl; 

// 1189B - Number Circle 
 
void solve(){
	
	
	ll n;
	cin >> n;
	ll arr[n];
	For(i, 0, n) cin >> arr[i];
	
	sort(arr, arr+ n);
	if(arr[n-3] + arr[n-2] <= arr[n-1])pNo
	else{
		
		pYes
		cout << arr[n-1] << " ";
		for(int i =  n-3; i >= 0; i-- ){
			cout << arr[i] << " ";
		}
		cout << arr[n -2];
	
	}

}

int main(){

	// For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();
       
 
   return 0;
}
		