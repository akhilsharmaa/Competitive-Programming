#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1154A - Restoring Three Numbers ACCEPTED :) 

void solve(){
    
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    cin >> arr[i]; // input-values
    
    sort(arr.begin(), arr.end());

    ll a = arr[3] - arr[2];
    ll b = arr[3] - arr[1];
    ll c = arr[3] - arr[0];

    cout << a << " " << b << " " << c;
    
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);


       solve();


   return 0;
}

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

