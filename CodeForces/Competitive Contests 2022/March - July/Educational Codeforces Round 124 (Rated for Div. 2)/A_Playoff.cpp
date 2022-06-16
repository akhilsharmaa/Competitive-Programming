/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

long long binpow(long long base, long long n) {

   long long res = 1;
   while (n) {
      if (n % 2 == 1){
         res *= base;
         n--;
      }else {
         base *= base;
         n /= 2;
      }
   }
   return res;
}

void solve(){
    
   ll n;
   cin >> n;

   ll std = binpow(2, n), ans; 
   ans = std-1;

   cout << ans << endl; 
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

