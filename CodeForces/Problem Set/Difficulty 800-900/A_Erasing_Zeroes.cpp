#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1303A - Erasing Zeroes ACCEPTED :) 

void solve(){
    
    string str;
    cin >> str;
    int n = str.length();
    

    int ones = 0, zeros = 0;
    int l = 0, r =n -1;

    while (str[l] != '1'){
        l++;
        if(l >= r){
            cout << "0\n";
            return;
        }
    }
    
    while (str[r] != '1'){
        if(r <= l){
            cout << "0\n";
            return;
        }
        r--;
    }

    for (int i = l; i <= r; i++)
        if(str[i] == '0')zeros++;
    
    cout << zeros << "\n";
    
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


