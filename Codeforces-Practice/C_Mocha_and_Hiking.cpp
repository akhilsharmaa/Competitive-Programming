#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define loop(i,j,u)   for(int i= u; i <= j; i++)
#define MOD 		 1e9 + 7


void solve(){ 

	int n, onePos = 0, zeroPos= 0; 
	cin >> n;
	vector<bool> vt;
	
	bool one = false, zero= false;
	
	for (int i = 0; i < n; ++i){
		int k; cin >> k; 
		vt.pb(k);
		
		if(k == 1 && !one){
			one = true;
			onePos = i;
		}
		
		if (k == 0 && !zero){
			zero = true;
			zeroPos = i;
		}
	}

	
	
		
		bool last = false;
		
		for (int i = 0; i < n; ++i)	
		{	
			
			if(vt[i] == 1 && !last){
				cout << n + 1 << ' ' << i+1 << ' ';
				last = true;
			}else{
				cout << i+1 << ' ';
		}
		
	}
	
	cout << endl;
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

