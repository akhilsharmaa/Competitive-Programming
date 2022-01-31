#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// *Accepted By CodeForces

  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

void solve(){
    
    ll a, b, c, p, q, n, r, k, m, x, y, z;
    string str;

    cin >> n;
    cin >> str;

    if(n > 2){
        pNo
        return ;
    }

    if(str == "0" ||
        str == "10" ||
        str == "01" ||
        str == "1" ){
            pYes
    }else{
        pNo
    }
    
    
}

// *CODE BY AKHILESH 
// C++ 

int main(){

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}