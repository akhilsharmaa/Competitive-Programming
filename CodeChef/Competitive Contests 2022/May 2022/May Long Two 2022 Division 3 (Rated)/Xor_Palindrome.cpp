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
    
    ll n, i =0;
    string s;
    cin >> n >> s;

    ll ans = 0,cnt=0;

    for (int i = 0; i < n/2; i++){
        if(s[i]!= s[n-i-1]){
            cnt++;
        }
    }

    if(cnt%2==0)ans = cnt/2;
    else ans = cnt/2 + 1;

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

