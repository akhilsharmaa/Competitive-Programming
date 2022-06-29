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
    
   string s, t;
   cin >> s >> t;
   int n = s.length(), m = t.length();

   ll ans = pow(2, n);

   for (int i = 0; i < m; i++){
        if(t[i] == 'a'){
            ans = -1;
            break;
        }
   }
   
   if(m == 1 && t[0] == 'a')ans = 1; 

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

