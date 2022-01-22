#include <bits/stdc++.h>
using namespace std;

// SOLVED :) ACCEPTED
int main(){

   int a;
   cin >> a;

   if (a > 2){
       if(a % 2 == 0)
            cout<< "YES"<< endl;
       else cout<<  "NO"<< endl;
   }else{
      cout<<  "No"<< endl;
   }
   
   return 0;
}