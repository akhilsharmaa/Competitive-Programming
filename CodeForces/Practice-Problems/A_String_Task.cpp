#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 118A - String Task Accepted

void solve(){
    
   string str;
   cin >> str;
   int n= str.length();

   string res = "";

   for (int i = 0; i < n; i++){

       str[i] = tolower(str[i]);
       if(  str[i] != 'a' && 
            str[i] != 'e' && 
            str[i] != 'i' && 
            str[i] != 'o' && 
            str[i] != 'y' && 
            str[i] != 'u'){
           res += ".";
           res += str[i];
       }


   }
    
    cout << res;
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

