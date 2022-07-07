/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
     
    ll n , cnt = 0;  
    string str;
    cin >> n >> str;

    for (int i = 0; i < n; i++){
        if(str[i] == '1' && str[i+1] == '0'){
            cnt ++ ;
        }
    }
    
    cout << cnt << endl;
     
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

