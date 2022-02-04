#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 339A - Helpful Maths ACCEPTED :) 


void solve(){
    
    string str;
    cin >> str;

    int n = str.length(), s = (n + 1) /2;
    int arr[s];

    int j = 0;
    for (int i = 0; i < n; i++){
        if(isdigit(str[i])){
            arr[j] = str[i] - '0';
            j++;
        }
    }
    
    // SORT 
    sort(arr, arr+ s);

    cout << arr[0] ;
    for (int i = 1; i < s; i++){
        cout << "+" << arr[i] ;
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

