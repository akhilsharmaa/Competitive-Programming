#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 723A - The New Year: Meeting Friends

void solve(){
    
   int x1, x2, x3;
   cin >> x1 >> x2 >> x3;

    int ans = 0;

   if((x1 > x2 && x1 < x3)|| 
      (x1 > x3 && x1 < x2)){
          ans = abs(x1 - x2) + abs(x1 - x3);

    }else if((x2 > x1 && x2 < x3) 
        || x2 > x3 && x2 < x1){
           ans = abs(x2 - x1) + abs(x2 - x3); 
    }else{
        ans = abs(x3 - x1) + abs(x2 - x3); 
    }
    
    cout << ans << "\n";
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

