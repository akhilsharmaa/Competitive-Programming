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

   sort(temp.begin(), temp.end() , greater<char>());
   if(s == temp){ cout << "no answer\n"; return; }

   int n = s.size();
   for (int i = 0; i < n; i++){
      
      char mini = 'a';
      for (int j = i; j < n; j++){
         if(s[i] < s[j]){
            swap(s[i], s[j]);
            cout << s << endl;
            return;
         }
      }
   }
   
}


int main(){


   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

