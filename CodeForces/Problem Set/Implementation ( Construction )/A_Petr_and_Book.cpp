#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// A. Petr and Book ACCEPTED :) 

void solve(){
    
   int page; 
   cin >> page;

   int arr[7];
   for(int i = 0; i < 7; i++)
        cin >> arr[i];
   
   int d = 0; 
   while (page > 0){
       if(d == 7)d = 0;
        page -= arr[d];
        d++; 
   }

   cout << d;
    
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

