#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       // Taking INPUT Array
       int n; cin >> n;
       vector<float> arr(n);
       for (int i = 0; i < n; i++)
       cin >> arr[i]; // input-values
       
       float A_Sum= 0 , B_Sum = 0;

        for (int i = 0; i < n; i++){
            A_Sum = max(A_Sum, arr[i]);
            B_Sum += arr[i];
        }

        B_Sum = B_Sum - A_Sum;
       
        std::cout.setf(std::ios::fixed);
        std::cout.precision(6);
       cout << A_Sum + (B_Sum/(n -1)) << "\n";
   }

   return 0;
}