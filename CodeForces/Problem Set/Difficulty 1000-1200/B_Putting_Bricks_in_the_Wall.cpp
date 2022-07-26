
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
     
    
    int n; cin >> n;
    vector<string> str(n);
      
    for (int i=0; i<n; ++i)
    	cin >> str[i];
    
    char sUp = str[0][1], 	  sDn = str[1][0];
    char fUp = str[n-2][n-1], fDn = str[n-1][n-2];
    
    ll ans = 0;
    
   	if(sUp == sDn){
   		// All are same 
   		if(fUp == fDn && sDn == fDn){
   			cout << "2 \n1 2\n2 1\n";
   		}else if(fUp == fDn && sDn != fDn){
   			cout << 0 << endl;
   		}else {
   			if(sUp == fUp){
   				cout << "1\n" << n-1 << ' ' << n << endl;
   			}else {
   				cout << "1\n" << n << ' ' << n-1 << endl;
   			}
   		}
   	}else if(fUp == fDn){
   		
   		// All are same 
   		if(sDn == sUp && sDn == fDn){
   			cout << "2 \n1 2\n2 1\n";
   		}else if(sUp == sDn && sDn != fDn){
   			cout << 0 << endl;
   		}else {

   			if(fDn == sUp){
   				cout << "1\n" << 1 << ' ' << 2 << endl;
			}else {
				cout << "1\n" << 2 << ' ' << 1 << endl;
			}
   		}
   	}else if(sDn != fUp){
   		cout << "2 \n2 1\n"; 
   		cout << n-1 << " " << n << "\n";
   	}else{
   		
   		cout << "2 \n1 2\n"; 
   		cout << n-1 << " " << n << "\n";
   	}
     
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

