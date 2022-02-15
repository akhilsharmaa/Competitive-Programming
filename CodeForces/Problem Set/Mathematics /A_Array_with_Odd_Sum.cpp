#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 
#define ll long long int

// 	1296A - Array with Odd Sum ACCEPTED 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   ll sum = 0;
   int odd = 0, even= 0;
   for (int i = 0; i < n; i++){
        int val; cin >> val;
        arr[i] = val;
        sum += val;

        if(val % 2 == 0)even++;
        else odd++;
   }
   
   if(sum % 2 != 0 || sum ==1)
        pYes
    else{
        if(odd != 0 && even != 0)
            pYes
        else pNo
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

