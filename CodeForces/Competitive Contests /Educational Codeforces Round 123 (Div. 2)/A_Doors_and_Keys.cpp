#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   string str;
   cin >> str;

    bool key_r= false;
    bool key_b= false;
    bool key_g= false;

   for (int i = 0; i <= str.length(); i++){

       if(str[i] == 'R' && !key_r
          || str[i] == 'B' && !key_b
          || str[i] == 'G' && !key_g ){
              pNo
              return;
       }

       if(str[i] == 'r')key_r = true; 
       if(str[i] == 'b')key_b = true; 
       if(str[i] == 'g')key_g = true; 
   }
   
    pYes
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

