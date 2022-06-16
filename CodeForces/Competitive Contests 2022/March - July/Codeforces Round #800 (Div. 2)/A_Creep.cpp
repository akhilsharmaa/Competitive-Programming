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
    
   ll zero = 0, ones= 0 ;   
   cin >> zero >> ones;

   string ans = ""; 

    ll n = ones + zero;

    bool onesTurn = ones > zero;

    for (int i = 0; i < n; i++){
        if(onesTurn){
            ans += '1';
            ones--;

            if(zero) onesTurn = false;
        }else {
            ans += '0';
            zero--;

            if(ones) onesTurn = true;
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

