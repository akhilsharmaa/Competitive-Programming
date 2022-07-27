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
    
   ll n; cin >> n;
   ll a, b, c;

   if(n % 2== 0){
        a = n - 3; 
        b = 2 , c = 1;
   }else {

        ll m = n-1;

        if((m/2) % 2 == 0){
            a = (m/2) + 1;
            b = (m/2) - 1;
        }else {
            a = (m/2) + 2;
            b = (m/2) - 2;
        }
   }
    
    cout <<a << " " <<b << " " <<c << endl;
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

