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
    
   string str ;
   cin >> str;
   int n = str.size();


   for (int i = 0; i < n; i++){

       int dig = str[i] - '0';
       
       switch (dig){
       case 9: 
       if(i != 0){
           
       str[i] = '0'; 
       } 
       break;
       case 8: str[i] = '1'; break;
       case 7: str[i] = '2'; break;
       case 6: str[i] = '3'; break;
       case 5: str[i] = '4'; break;
       
       default:
           break;
       }
   }
   
   cout << str << "\n"; 
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

