#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 131A - cAPS lOCK ACCEPTED 

void solve(){
    
    string s;
    char u;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++) {
        if(islower(s[i])) {
            c = false;
        }
    }

    if(c == true) {
        for(int j = 0; j < s.length(); j++) {
            if(islower(s[j])) u = toupper(s[j]);
            else u = tolower(s[j]);
            cout << u;
        }
    }

    else cout << s;
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

