#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   ll num;
   cin >> num ;

    string str;
    cin >> str;

    ll c= 0, n= 0, d= 0;

    for (int i = 0; i < 14; i++){
        if(str[i] == 'C'){
            c++;
        }else if (str[i] == 'N')
            n ++;
        else 
            d++;
    }
    
    if(c > n){
        cout << 60 * num << "\n";
    }else if(n > c){
        cout << 40 * num << "\n";
    }else if(c == n){
        cout << 55 * num << "\n";
    }else {

    }

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
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

