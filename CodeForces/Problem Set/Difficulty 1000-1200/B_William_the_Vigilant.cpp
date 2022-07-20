
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
     
    
    ll n, q;
    string str;
    cin >> n >> q >> str;
    
    int cnt = 0;
    for (int i = 0; i < n - 2; ++i)
    	if(str[i]=='a' && str[i+1]=='b' && str[i+2] == 'c')
    		cnt++;
    	
    	
    while(q--){
    	
    	int pos; cin >> pos;
    	char c;  cin >> c;
    	
    	pos--;
    
    	if(str[pos] == c){
    		cout << cnt << endl;
    		continue;
    	}
    	
    	if(	str[pos] == 'c' && str[pos-1] == 'b' && str[pos-2] == 'a' ||
    		str[pos] == 'b' && str[pos-1] == 'a' && str[pos+1] == 'c' || 
    		str[pos] == 'a' && str[pos+1] == 'b' && str[pos+2] == 'c')
    	{
    		cnt--;
    	}
    	
    	str[pos] = c;
    	
    	if(	str[pos] == 'c' && str[pos-1] == 'b' && str[pos-2] == 'a' ||
    		str[pos] == 'b' && str[pos-1] == 'a' && str[pos+1] == 'c' || 
    		str[pos] == 'a' && str[pos+1] == 'b' && str[pos+2] == 'c')
    	{
    		cnt++;
    	}
    	
    	
    	cout << cnt << endl;
    }
    
    
     
}


int main(){
    
    fastIO // Fast-I/O 
    solve();

    return 0;
}

