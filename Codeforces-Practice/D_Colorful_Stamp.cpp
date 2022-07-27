
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

vector<string> subset(string str){

	vector<string> vt;
	
	int i = 0;
	while(i < str.length()){
		string temp = "";
		
		while(str[i] == 'R' || str[i] == 'B')
			temp += str[i], i++;
		
		if(temp != "")vt.pb(temp);
		i++;
	}
	
	return vt;
}

void solve(){
     
    int n;  cin >> n;
    string str; cin >> str;
    
    bool flag = true;
    
    vector<string> vt = subset(str);
     
    for(auto i : vt){
    	
    	bool b = 0, r = 0;
    	
    	for(auto j : i){
    		if(j == 'B') b = true;
    		if(j == 'R') r = true;
    	}
    	
    	if(i.size() == 1 or b == false or r == false){
    		flag = false;
    	}
    } 
    
    flag == true ? cout << "YES\n" : cout << "NO\n";
}


int main(){
    
    fast // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

