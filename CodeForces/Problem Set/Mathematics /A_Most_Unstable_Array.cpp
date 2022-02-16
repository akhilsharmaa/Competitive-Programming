#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1353A - Most Unstable Array ACCEPTED :) 

void solve(){
    
   ll n, m;
   cin >> n >> m;

   if(n > 2){
       cout << 2 * m << "\n";
   }else if(n == 1) {
       cout <<  0 << "\n";
   }else {
       cout <<  m << "\n";
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
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

