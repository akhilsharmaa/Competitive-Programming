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
    ll n = 0; cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++)
    cin >> v[i]; // input-values


    ll i = 0, temp = 1;
    while (i < n){

        while(v[i] % 2 == 0){
            v[i] /= 2;
            temp *= 2;
        }

        i++;
    }

    sort(all(v));
    v[n-1] *= temp;

    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum+= v[i];
    }
    
    cout << sum << endl;
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

