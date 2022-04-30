/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> fruit(n);
   vector<int> time(n);
   
   for (int i = 0; i < n; i++){
       cin >> fruit[i] >> time[i];
   }
    
   int left = 0, right= n-1;
   double joe = 0.0, chandler = 0.0;

    for (int i = 0; i < n; i++){
        time[i] *= fruit[i];  
    }
    
   while(left < right){

       if(time[left] == 0)left++;
       if(time[right] == 0)right--;

       time[left] -= fruit[left];
       time[right] -= fruit[right];

       joe += fruit[left];
       chandler += fruit[right];
   }    

    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    std::cout << joe;  
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   solve();

   return 0;
}

