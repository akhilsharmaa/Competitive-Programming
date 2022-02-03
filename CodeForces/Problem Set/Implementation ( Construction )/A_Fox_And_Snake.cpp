#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 510A - Fox And Snake ACCEPTED :) 

void solve(){
    
   ll n, m;cin >> n >> m;
   
   int right = 1;
   int left = 3;

   for (int i = 1; i <= n; i++){

        if(i % 2 != 0){
           for (int j = 1; j <= m; j++){
                cout << "#";
           }cout << "\n";
           continue;
        }

        if(i % 4 == 0){
            cout << "#";
            for (int j = 1; j < m; j++){
                cout << ".";
            }cout << "\n";
        }
        
        if( (i % 4) - 2 == 0){
            for (int j = 1; j < m; j++){
                cout << ".";
            }
            cout << "#\n";
        }
   }
   
    

}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

