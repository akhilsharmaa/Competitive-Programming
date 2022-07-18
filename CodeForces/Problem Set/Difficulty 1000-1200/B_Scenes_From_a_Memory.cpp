
/* c++ by Akhilesh Sharma  */

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
     
    int n; 
	string s;
	cin >> n >> s;
	
	if(n == 1){
		cout << 1 << "\n" << s << "\n";
		return;
	}
	
	
    for (int i = 0; i < n; ++i){
    	if((s[i] - '0') % 2 == 0){
    		cout << 2 << "\n" << s[0] <<  s[i] << "\n";
    		return;
    	}
    }
     
    
    cout << 2 << "\n" << s[0] << s[1] << "\n";
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

