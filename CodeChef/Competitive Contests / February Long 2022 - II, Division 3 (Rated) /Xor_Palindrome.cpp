#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   int n;
   string str;
   cin >> n >> str;

    // If N == ODD
   if(n % 2 != 0){ pYes return; } 

    // If n == EVEN
   int zero = 0, ones = 0;
    for (int i = 0; i < n; i++){
        if(str[i] == '0'){
            zero++;
        }else ones++;
    }
    
    if(zero == ones || 
        zero == 0 || ones == 0
        ||( zero % 2 == 0 && ones % 2 == 0)){
        pYes
    }else pNo


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
