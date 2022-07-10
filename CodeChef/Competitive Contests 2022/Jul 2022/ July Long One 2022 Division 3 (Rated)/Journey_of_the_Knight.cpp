/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define fi           first
#define se           second
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
     
    ll x1,y1, x2,y2;
    cin >> x1 >> y1 >>x2 >> y2;

    if(abs(x1-x2) %2 == 0 && abs(y1-y2)% 2== 0
    || abs(x1 - x2) %2 != 0 && abs(y1-y2)%2 != 0){
        pYes
    }else pNo
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

