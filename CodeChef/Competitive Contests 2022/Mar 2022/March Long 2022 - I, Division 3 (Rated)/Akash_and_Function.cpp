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



int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
    
   bool arr[1002] = {true}; 
   for (int i = 2; i < 501; i++){
        arr[i * 2] = false;
   }
    
   while(tCase--){

       ll n, cnt =0;
       
       cin >> n;
       n++;

       ll ans = n >> 1;
       cout << ans << endl;

   }

   return 0;
}

