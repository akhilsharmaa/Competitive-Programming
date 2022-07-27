#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1385A - Three Pairwise Maximums ACCEPTED :) 

void solve(){
    
   
   vector<int> arr(3);
   for (int i = 0; i < 3; i++)
   cin >> arr[i]; // input-values

   sort(arr.begin(), arr.end());

   if(arr[2] == arr[1]){
       pYes
       cout << arr[0] << " "
            << arr[0] << " " 
            << arr[2] << "\n";

   }else pNo
   
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

