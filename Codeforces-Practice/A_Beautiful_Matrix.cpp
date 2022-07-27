#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// Accepted


void solve(){
    
   int arr[5][5];

   int x, y; 
   for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++){
           cin >> arr[i][j];
           if(arr[i][j] == 1){
               x = i, y = j;
           }
       }
   }
   
   int x_diff = abs(2 - x);  
   int y_diff = abs(2 - y);  

   cout << x_diff + y_diff << "\n";
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

