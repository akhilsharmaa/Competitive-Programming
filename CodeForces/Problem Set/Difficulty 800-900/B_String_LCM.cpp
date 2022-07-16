#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1473B - String LCM

void solve(){
    
    string s, t;
    cin >> s >> t;

    string s_temp = s;
    string t_temp = t;


    while (true){

        if(s_temp.size() == t_temp.size()){
            if(s_temp == t_temp){
                cout << s_temp << endl;
            }else cout << -1 << endl;
            return;
        }
        else if(s_temp.size() < t_temp.size()){
            s_temp += s;
        }else t_temp += t;
    }

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

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

