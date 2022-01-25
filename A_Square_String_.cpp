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
      
       string str;
       cin >> str;

        int n = str.length();

        if(n % 2 == 1){
            pn
        }else{

            string s1 = str.substr(0, n/2);
            string s2 = str.substr(n/2);

            if(s1 == s2)
                py
            else 
                pn

        }
        
            

   }

   return 0;
}