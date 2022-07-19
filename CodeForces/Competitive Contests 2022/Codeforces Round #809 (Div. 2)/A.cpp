
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast         cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;


void solve(){
	
	
	int n, x; 
	cin >> n >> x;
	vector<int> v(n);
	  
	for (int i=0; i<n; ++i)
		cin >> v[i];
	
	string str = "";
	for (int i = 0; i < x; ++i) str += 'B';
	
	
	for (int i = 0; i < n; ++i){
	
		int l = v[i] - 1;
		int y = x - v[i];
		
		if(str[min(l, y)] == 'B'){
			str[min(l, y)] = 'A';
		}else 
			str[max(l, y)] = 'A';
	}
	
	
	cout << str << endl;
}


int main(){
    
    fast // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

