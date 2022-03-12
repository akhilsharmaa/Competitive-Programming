#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;



void solve(){
    
    string str;
    ll n, k;
    cin >> n >> k;
    cin >> str;
    
    ll left = 0, right = str.length() - 1;
    ll cnt = 0;

    while(left <= right){
        if(str[left] != str[right]){
            cnt++;
        }
        left ++;
        right--;
    }

    int rem = k - cnt;

    if(rem >= 0 && rem % 2 == 0)
        pYes
    else if(rem >= 0 && n %  2 == 1){
        pYes
    }else{
        pNo
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
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

