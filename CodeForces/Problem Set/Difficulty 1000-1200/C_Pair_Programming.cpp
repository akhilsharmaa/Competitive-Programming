
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
  
    
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; 
    
   	while(t--) {
   
	    int k, n, m;
	    cin >> k >> n >> m;
	    vector<int> a(n) , b(m);
	    
	    for(int i=0; i < n;i++)cin >> a[i];
	    for(int i=0; i < m;i++)cin >> b[i];

	    int p1=0, p2=0 ;
	    vector<int> vt;
	    bool ok = 1;
	    
	    while(p1 <  n || p2 < m){
	    
	    	if (p1 < n && a[p1] == 0) {
                vt.pb(0);
                k++, p1++;
            }else if (p2 < m && b[p2] == 0) {
                vt.pb(0);
                k++, p2++;
	      	}
	      	else if (p1 != n && a[p1]<=k) {
                vt.pb(a[p1++]);
            } else if (p2 != m && b[p2] <= k) {
                vt.pb(b[p2++]);
            } else {
                ok = false; 
                break;
            }
            
	    }
	    
	    if(ok){
	    	printv(vt);
	    }else 
	    cout << -1 <<endl;
    }

    return 0;
}

