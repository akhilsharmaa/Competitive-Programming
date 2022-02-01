#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1613A - Long Comparison Accepted

void solve(){
    
    ll a, az, b, bz;

    cin >> a >> az;
    cin >> b >> bz;

    if(az == bz){
        if(a == b) cout << "=" << "\n";
        else if( a > b) cout << ">" << "\n";
        else cout << "<" << "\n";
        return;
    }else{

        while (a <= 100000){
            if(az == 0)break;
            else{
                a *= 10;
                az--;
            }
        }
        while (b <= 100000){
            if(bz == 0)break;
            else{
                b *= 10;
                bz--;
            }
        }   
    }    
    
    if(az > bz) cout << ">\n";
    else if(az < bz) cout << "<\n";
    else{
        if(a > b){cout << ">\n";}
        if(a == b){cout << "=\n";}
        if(a < b){cout << "<\n";}
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
 |  C++ Code by Akhilesh Kr. Sharma       |
 |  GITHUB ID - @akhilsharmaa             |
 |________________________________________|
 */

