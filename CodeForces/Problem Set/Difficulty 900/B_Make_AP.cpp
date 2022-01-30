#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// Accepted

void solve(){
    
    ll a, b, c, p, q, r, k, m, x, y, z;
    
    cin >> a >> b >> c;

    // *Already in AP 
    if((b - a) == (c - b) ){
        pYes 
        return;
    } 

    if((a + c)% (2 * b) == 0){
        pYes 
        return;
    }

    if((2 * b -a) > 0)
    if((2* b-a) % c == 0){
        pYes
        return;
    }


    if((2 * b -c) > 0)
    if((2*b - c) % a == 0){
        pYes
        return;
    }
    pNo

    
    
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