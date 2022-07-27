#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1409A - Yet Another Two Integers Problem ACCEPTED :) 

void solve(){
    
    //    Find k | 1 <= k <= 10

   ll a, b;
   cin >> a >> b;

   ll dif = abs( b - a);
   ll answer = dif / 10;
   if(dif % 10 != 0 ){
       answer++;
   } 

    cout << answer <<  "\n";
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

