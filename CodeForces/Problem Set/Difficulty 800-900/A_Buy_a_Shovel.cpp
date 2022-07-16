#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

//  732A - Buy a Shovel ACCEPTED :) 

void solve(){
    
   int k, r;
   cin >> k >> r;

   int i = 2, count = 1, value = k;
    while(1){
        if(value % 10 == 0 || value%10 == r){
            cout << count ; 
            break;
        }

        value = k * i;
        count++;
        i++;
    }
    
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);
       solve();


   return 0;
}

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

