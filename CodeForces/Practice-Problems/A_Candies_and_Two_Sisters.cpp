#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1335A - Candies and Two Sisters ACCEPTED 

void solve(){
    
   ll n, res;
   cin >> n;

   if(n %  2== 0){
       res = n/ 2 - 1;
   }else {
       res = n/ 2;
   }
    
    cout << res << endl;
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

