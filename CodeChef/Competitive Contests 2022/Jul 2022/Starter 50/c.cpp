
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
    cin >> n; 
    string str;
    cin >> str;
    
    int zero = 0, one = 0;
    
    for (int i = 0; i < n; ++i){
    	one += str[i] == '1';
    	zero += str[i] == '0';
    }
    
    string a = "";
    
    if(one >= zero){
    	for (int i = 0; i < (n/2) + n % 2; ++i){
    		a+= '1';
    	}
    }else {
    	for (int i = 0; i < (n/2) + n % 2; ++i){
    		a+= '0';
    	}
    }
     
    cout << a << endl; 
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

