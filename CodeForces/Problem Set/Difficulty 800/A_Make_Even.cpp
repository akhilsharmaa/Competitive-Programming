#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

// Accepted

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       string numStr;
       cin >> numStr;
       int n = numStr.size();

       if(int(numStr[n-1] - '0') % 2 == 0){
           cout << 0 << "\n";
           continue;
       }
       
       
       if((numStr[0] - '0' )% 2 == 0){
           cout << 1 << "\n";
           continue;
       }
            
        bool flag = false;
        for (auto &&i : numStr){
            if(int(i - '0') % 2 == 0){
                flag = true;
            }
        }

        if(flag)
            cout << '2' << "\n";
        else{
            cout << "-1" << "\n";
        }
       
      
   }

   return 0;
}       