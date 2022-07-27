
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
    
    int m, sum = 0, x0, x1, x2, y0, y1, y2;

	cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;

	m = min(x0, y2);
	y2 -= m;

	m = min(x1, y0);
	x1 -= m;

	sum += 2 * min(x2, y1);
	sum -= 2 * min(x1, y2);

	cout << sum << endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

