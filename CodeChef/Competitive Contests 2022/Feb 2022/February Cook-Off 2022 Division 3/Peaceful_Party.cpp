#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   ll a, b, c;
    cin >> a >> b >> c;

   cout << max (a + c , b) <<endl;
    
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
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

