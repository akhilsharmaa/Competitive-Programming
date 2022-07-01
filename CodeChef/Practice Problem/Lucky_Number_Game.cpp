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
    
    ll n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i]; // input-values
   
    ll bob=0, alice=0, com = 0;
    for (int i = 0; i < n; i++) 
        if(v[i] % a == 0){
            bob++;
            if(v[i] % b == 0)com++;
        }

    for (int i = 0; i < n; i++) 
        if(v[i] % b == 0) alice++;

    if(com >= 1)bob ++; 

    if(bob  > alice){
        cout << "BOB\n";
    }else{
        cout << "ALICE\n";
    }

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

