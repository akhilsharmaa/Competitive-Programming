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
#define MOD          100000009
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
    
   // Taking INPUT Array
   int n = 0; cin >> n;
   vector<int> v(n), suf(n), pref(n);
   
   for (int i = 0; i < n; i++)
   cin >> v[i]; // input-values 

    suf[0] = v[0];
    for (int i = 1; i < n; i++) 
        suf[i] = __gcd(v[i], suf[i-1]);

    pref[n-1]= v[n-1];
    for (int i = n-2; i >= 0; i--) 
        pref[i] = __gcd(v[i], pref[i+1]);

    ll sum = 0; 
    if(n > 1 && pref[1]>1 )sum++;
    if(n > 1 && suf[n-2]>1)sum++;


    for(int i = 1; i < n-1; i++){
	    if(__gcd(pref[i+1],suf[i-1]) > 1)  sum++;
    }

	cout<<sum<<endl;
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0;
   cin >> t ;
   while(t--){
       solve();
   }
   return 0;
}

