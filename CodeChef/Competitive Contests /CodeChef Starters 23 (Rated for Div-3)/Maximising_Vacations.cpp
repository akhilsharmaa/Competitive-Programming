#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       ll n, x;
       cin >> n >> x;

       string str;
       cin >> str;

        int temp = 0;

        int count = 0;
      

        // --------------------------------

        for (int i = 0; i < n; i++){
            
            if(str[i] == '1'){

               str[i] = '0';
               break;

            }
        }    


        for (int i = 0; i < n; i++){
           
            if(temp == x){
                count ++;
            }
            
           if(str[i] == '0'){
                temp ++;
           }
       }
       

      
      cout << count << "\n"; 
   }

   return 0;
}