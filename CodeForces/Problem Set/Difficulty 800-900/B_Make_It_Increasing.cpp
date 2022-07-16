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
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    cin >> a[i]; // input-values
    
    ll ans = 0;
    for (int i = n-2; i >= 0; i--){
        while (a[i] >= a[i+1] && a[i] != 0){
            a[i] /= 2;
            ans++;
        }
        
        if(a[i] >= a[i+1]){
            ans = -1;
            break;
        }
    }
    
    cout << ans << endl;
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

