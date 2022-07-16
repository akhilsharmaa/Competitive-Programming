
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
     
    string str, dupl;
    int p; 
    cin >> str >> p;
    dupl = str;
    int n = str.size();
    
    
    ll totalSum = 0;
    for (int i = 0; i < n; ++i)
    	totalSum += str[i] - '0' - 48;
    
    sort(str.begin(), str.end(), greater<char>());
  	
  	int i = 0;
  	for (i = 0; i < n; ++i){
  		int k = str[i] - '0' - 48;
  		if(totalSum <= p)break;
  		totalSum -= k;
  	}
  	
  	
  	unordered_map<char, int> mp;
  	
  	for (i; i < n; ++i){
  		mp[str[i]]++;
  	}	
  	
  	
  	string ans= "";
 	
 	for (int j = 0; j < n; ++j){
        
 		if(mp.find(dupl[j]) != mp.end()){
            if(mp[dupl[j]] > 0){
                ans += dupl[j];  
            }
 			mp[dupl[j]]--;
 		}
 	}
 	
	cout << ans << endl;
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

