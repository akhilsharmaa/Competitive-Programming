/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
    string str;
    cin >> str;
    int n = str.length();

    int ones = 0, zero= n-1;

    for (int i = 0; i < n; i++){
         if(str[i] == '1')ones = i;
    } 
     
   for (int i = n-1; i >= 0; i--){  
      if(str[i] == '0')zero = i;
   }

    ll ans = zero - ones;  
   //  cout << "o= " << ones+1  << " z= "<< zero+1 << endl;  
    cout << ans + 1 << endl;
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   int t; cin >> t;
   while(t--)solve();

   return 0;
}

