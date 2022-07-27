#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

void solve(){
    
    ll x, jump, z = 0;
    cin >> x >> jump;
    ll final = x;

    ll q = jump%4;

    if(q == 1){
        z =- jump;
    }else if(q == 2){
        z = 1;
    }else if(q == 3){
        z = jump +1;
    }

    if(x&1){
        cout << x - z <<"\n";
    }else{
        cout << x + z <<"\n";

    }

}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

  /* 
 __________________________________________
 |                                        |
 |  If this code helps you                |
 |  Please consider to GIVE A STAR :)     |
 |  & FOLLOW ME ON GITHUB                 |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

