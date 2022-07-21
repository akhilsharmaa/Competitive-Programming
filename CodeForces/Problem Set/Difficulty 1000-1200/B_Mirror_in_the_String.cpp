
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
    int n; 
    string s;
    cin >> n >> s;
    
    string ans =  "";
    ans +=  s[0];
    
    if(n == 1){
    	cout << ans + ans << endl;
    	return;
    }
    
    int i = 1;
    char last = s[0];
    while((s[i] < last) && i < n){
    	
    	if(s[i] > s[i-1])break;
    	
    	ans += s[i];
    	
    	if(s[i] < s[i-1]){
    		last = s[i-1];
    	}

    	i++;
    }

    string str2 = ans;
	reverse(str2.begin(), str2.end());
	ans += str2;

    cout << ans << endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

