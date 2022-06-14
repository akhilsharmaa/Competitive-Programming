/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define debug(x)     cout<<#x<<" "<<x<<"\n";


void solve(){

   
   // Taking INPUT Array
   int n = 0; 
   cin >> n;
   vector<int> v(n);
     
   for (int i = 0; i < n; i++)
   cin >> v[i]; // input-values
   
   
    map<ll, ll> mp;
    ll sum = 0;
    for (ll i = 0; i < n; ++i){
    	sum += v[i];
    	mp[sum] = i+1;
    }

    sum = 0;
    ll ans = 0;
    for (ll i = n-1; i >= 0; --i){
		sum += v[i];
		if(mp[sum] > 0 && mp[sum] < (i+1)){
			ans = max(ans, mp[sum]+ n-i );
		} 
    }	
   	
   	cout << ans << endl;
}


// Ignored by Online Judges
void setupMachine(){
   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if \"input.txt\" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << 1; // writing examplcase
    }

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
}


int main(){
   
   // Faster IO & FileIO
   setupMachine();

   int t = 1; 
   
   cin >> t;
   while(t--){
     solve();
   }

   return 0;
}

