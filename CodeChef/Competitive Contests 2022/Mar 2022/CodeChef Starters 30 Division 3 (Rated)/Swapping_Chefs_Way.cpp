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


void solve(){
    
   ll n;cin >> n;
   string str; cin >> str;

   string temp = str;

   sort(str.begin(), str.end());
   ll cnt = 0;

   for (int i = 0; i < n; i++){
      if(temp[i] != str[i]){
         char a = temp[i];
         temp [i]  = temp[n - 1 - i];
         temp [n - 1 - i]= a;
      }
   }
   
    if( str == temp) pYes
    else pNo
    
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

