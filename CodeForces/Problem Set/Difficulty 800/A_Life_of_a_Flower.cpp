#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1591A - Life of a Flower ACCEPTED 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   ll unWatered = 0;
   ll height = 1;

   for (int i = 0; i < n; i++){
       if(arr[i] == 0)unWatered++;
       if(unWatered >= 2){
           cout << "-1\n" ;
           return;
       }

       if(arr[i] == 1 && arr[i-1] == 1){
           height += 5;
           unWatered = 0;
       }else if(arr[i] == 1){
           height += 1;
           unWatered = 0;

       }
       
   }
   
   cout << height << "\n";
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

