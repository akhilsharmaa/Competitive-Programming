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

    if(n % 2 == 0){
        ll k = 1, l = 2, i = 1;
        while (i <= n){
            cout << l << " ";
            i++, l+=2;

            if(i <= n){
                cout << k << " ";
                i++, k+=2;
            }
        }
    }else {
        ll k = 3, l = 2, i = 2;
        cout << 1 << " ";
        while (i <= n){
            cout << k << " ";
            i++, k+=2;

            if(i <= n){
                cout << l << " ";
                i++, l+=2;
            }
        }
    }

    cout << endl;
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

