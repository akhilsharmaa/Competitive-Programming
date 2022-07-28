
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


bool isPossible(vector<int> &vt, ll k, ll tgt){
	
	ll sum = 0;
	for (int i = 0; i < k; ++i){
		sum += vt[i];
	}
	
	if(sum == tgt)return 1;
	
	for (int i = k; i < vt.size(); ++i){
		
		if(sum == tgt)return 1;
		
		sum += vt[i];
		sum -= vt[i-k];
		
		if(sum == tgt)return 1;
	}
	
	return false;
}


void solve(){
     
	
	ll n, k, sum= 0;
	cin >> n >> k;
	vector<int> v(n, 0);
	  
	for (int i=0; i<n; ++i)
		cin >> v[i], sum += v[i];
	
	if(sum < k){
		cout << -1<< endl;
	}else {
		
		int  ans = 0, i=0, j=0;
		sum = 0;
		
		while(sum < k) sum+= v[i++];
		while(v[i]==0 && i < n)i++;
		
		ans = i;
		while(i < n){
			
			if(v[i]==0){
				ans = max(ans, i-j+1);
				i++;	
			}else {
				
				while(v[j]!= 1){j++;}
			
				j++;
				ans = max(ans, i-j+1);
				i++;
			}
		}
		
		cout << n-ans << endl;
	}
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

