#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 	1343B - Balanced Array ACCEPTED :) 

void solve(){
    
   int n;cin >> n;

   if(n/2 % 2 ==0){

       vt<int> left_arr, right_arr;
       int mid = (n/2) +1, count = 1;

       while (count <= n/2){
           if(count % 2 == 0){
                left_arr.pb(mid + count);
                left_arr.pb(mid - count);
           }else {
                right_arr.pb(mid + count);
                right_arr.pb(mid - count);
           }
           count++;
       }
            
       pYes
       // Print Ouput of Arr-Vector 
       for (auto && i : right_arr){
          cout << i << " " ;
       } 


       // Print Ouput of Arr-Vector 
       for (auto && i : left_arr){
          cout << i << " " ;
       } 

        cout << "\n";

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
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

