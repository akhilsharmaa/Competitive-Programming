#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// Accepted :) 
void solution(){
   
   string s;
   cin >> s;

   for (int i = 0; i < s.size(); i+=2){
       cout<< s[i];
   }
       cout<< " ";

    
   for (int i = 1; i < s.size(); i+=2){
       cout<< s[i];
   }
    cout<< "\n";
}

 
 int main(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
       solution();
    }
    return 0;
 }