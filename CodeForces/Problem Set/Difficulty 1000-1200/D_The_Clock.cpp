
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


int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

void solve() {
	string s;
	cin >> s;
	int x;
	cin >> x;
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		tot += (int)(s[i] - '0') * a[i];
	}
	set<int> t;
	for (int i = 0; i < 2022; i++) {
		t.insert(tot);
		tot += x;
		tot %= 1440;
	}
	int res = 0;
	for (int i : t) {
		for (int j = 0; j < 16; j++) {
			if (good[j] == i) {res++;}
		}
	}
	cout << res << '\n';
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t; while(t--) solve();

    return 0;
}	

