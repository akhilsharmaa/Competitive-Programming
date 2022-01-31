#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;


  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       // Taking INPUT Array
       int n; cin >> n;
       vector<int> arr(n);
       for (int i = 0; i < n; i++)
       cin >> arr[i]; // input-values

       ll sum = 0;
       for (int j = 0; j < n; j++){
           sum += arr[j];
       }
       
       if((sum % n == 0)){
           cout<< 0 <<"\n";
       }else
           cout<< 1 <<"\n";

   }

   return 0;
}