/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vt vector
#define pb push back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define all(V) (V).begin(),(V).end()
#define printv(v) for(auto&&i:v)cout<<i<<' ';


void solve(){
    

    ll n, n1, n2, n3, n4;
    cin >> n>> n1>>n2>>n3>>n4;

    ll ans = max (n1, max(n2, max(n3, n4)));
    cout << ans << endl;

}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0; cin >> t;
   while(t--)
     solve();

   return 0;
}

