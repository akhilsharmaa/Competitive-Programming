/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pYes cout << "Yes" << endl; 
#define pNo cout << "No" << endl; 

// 1638B - Odd Swap Sort ACCEPTED 

void solve(){
    
    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        ll num; cin >> num;
        arr[i] = num; // input-values
    }

    ll odds = INT_MIN, evens = INT_MIN; 
   
    for (auto && i : arr){
        if(i % 2 != 0){
            if (i < odds) {
                pNo return;
            }else  odds = i;   
        }else {
            if (i < evens) {
                pNo return;
            }else {
                evens = i;   
            }
        }
    } 

    pYes
    
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

