#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 110A - Nearly Lucky Number ACCEPTED 

void solve(){
    
    ll n ;
    cin >> n;
    int a = 0;
    while (n != 0){
        if(n % 10 == 7 || n % 10 == 4){
            a++;
        }
        n /= 10;
    }

    if(a == 7 || a== 4)pYes
    else pNo
    
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

