#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

// Accepted :) 

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
      
        string keyboard, toType; 
        cin >> keyboard >> toType ;

        ll sum = 0;

        for (int i = 0; i < toType.size(); i++){
            
            int temp;
            if(i == 0){
                int k = 0;
                while(toType[0] != keyboard[k]){
                    k++;
                }
                temp = k;
            }

            for (int j = 0; j < keyboard.size(); j++){
            
                if(toType[i] == keyboard[j]){
                    sum += abs(j - temp);
                    temp = j;
                    break;
                }

            }

        }

        cout << sum << "\n";
        
      
   }

   return 0;
}   