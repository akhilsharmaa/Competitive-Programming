/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    
   string s, temp;
   cin >> s; 
   temp = s;

   sort(s.begin(), s.end() , greater<char>());

   if(s == temp){
       cout << "no answer\n";
   }else cout << s << endl;
}


int main(){


   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

