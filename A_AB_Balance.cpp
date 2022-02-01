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
    
    string str;
    cin >> str;
    ll n = str.length();

    
    if(str[0] != str[n-1])
        str[0] = str[n-1];
    
    cout << str << "\n";
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
 __________________________________________
 |                                        |
 |  C++ Code by Akhilesh Kr. Sharma       |
 |  GITHUB ID - @akhilsharmaa             |
 |________________________________________|
 */

