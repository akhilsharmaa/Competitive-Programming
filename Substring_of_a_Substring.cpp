/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
     
   string str; cin >> str;

   map<char, int> mp; 
   map <int, int> :: iterator it;

   for (int i = 0; i < str.length(); i++){
       mp[str[i]]++;
   }
    
   int cnt =  0;
   for (auto &&it : mp){
      if(it.second == 1) {
        cnt++;
      }
    }

    if(cnt == 0) cnt = -1;
    cout << cnt << endl;
    // cout << cnt <<endl;
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

