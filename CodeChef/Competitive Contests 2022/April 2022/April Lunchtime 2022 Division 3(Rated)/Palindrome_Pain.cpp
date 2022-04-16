/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
   ll x, y;
   cin >> x>>y;

   if((!(x % 2 == 0) && !(y % 2 == 0)) || 
         x < 2 || y < 2){
       cout << -1 << endl;
       return;
   }

   string str1 = "", str2= ""; 

   if(x % 2 == 0 && y % 2 == 0){
      for (int i = 0; i < x/2; i++) str1 += "a";
      for (int i = 0; i < y; i++) str1 += "b";
      for (int i = 0; i < x/2; i++) str1 += "a";

      // Str2 
      for (int i = 0; i < y/2; i++) str2 += "b";
      for (int i = 0; i < x; i++) str2 += "a";
      for (int i = 0; i < y/2; i++) str2 += "b";

      cout << str1 << "\n"<< str2 << endl;

   }else if( x%2 == 0){

      for (int i = 0; i < x/2; i++) str1 += "a";
      for (int i = 0; i < y; i++) str1 += "b";
      for (int i = 0; i < x/2; i++) str1 += "a";

      // Str2 
      for (int i = 0; i < y/2; i++) str2 += "b";
      for (int i = 0; i < x/2; i++) str2 += "a";
      str2 += "b";
      for (int i = 0; i < x/ 2; i++) str2 += "a";
      for (int i = 0; i < y/2; i++) str2 += "b";

      cout << str1 << "\n"<< str2 << endl;
   }else if(y % 2 == 0){

      // Str1 
      for (int i = 0; i < y/2; i++) str1 += "b";
      for (int i = 0; i < x ; i++) str1 += "a";
      for (int i = 0; i < y/2; i++) str1 += "a";

      // Str2 
      for (int i = 0; i < x /2; i++) str2 += "a";
      for (int i = 0; i < y/2; i++) str2 += "b";
      str2 += "a";
      for (int i = 0; i < y/ 2; i++) str2 += "b";
      for (int i = 0; i < x /2; i++) str2 += "a";

      cout << str1 << "\n"<< str2 << endl;

   }else {
      cout << -1 << endl;
   }

   

}


int main(){

   int t; cin >> t;
   while(t--)solve();

   return 0;
}

