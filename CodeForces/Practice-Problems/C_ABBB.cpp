
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
     
	string str;
	cin >> str;
	int n = str.length();
     
    stack<char> st;
     
	for (int i = 0; i < n; ++i){
		if(str[i] == 'B'){
			if(st.size()==0) st.push('B');
			else st.pop();		
		}else{
			st.push(str[i]);
		}
	}
     
    cout <<  st.size()<< endl;
}



int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

