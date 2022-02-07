#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1430C - Numbers on Whiteboard ACCEPTED

void solve(){
    
    int num;
    cin >> num;
    int l = num;
    int r = num - 1;
    cout << 2 <<  "\n";
    for(int i = 1;i < num ; i++){
        cout << l << " " <<  r << "\n";
        l =(l+r+1)/2;
        r--;
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

