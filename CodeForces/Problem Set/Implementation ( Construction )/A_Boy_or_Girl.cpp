#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 236A - Boy or Girl accepted :) 

void solve(){
    
    string name;
    cin >> name;
    int n = name.length();

    map<char, int> mp;

    for (int i = 0; i < n; i++){
        mp[name[i]]++;
    }

    int cnt =  0;

    map <char, int> :: iterator it;
    for (auto &&it : mp){
        // cout << it.second << " ";
        cnt++;
    }

    if(cnt % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }

}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();


   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

