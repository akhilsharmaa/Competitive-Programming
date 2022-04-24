/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int findUgNess(vector<int> &arr , int n ){

    ll ugNess = 0;

    // left-side
    for (int i = 1; i < n; i++){
        ugNess += max(0,arr[i] - arr[i-1]);
    }

    // left-side
    for (int i = n-2; i >= 0; i--){
        ugNess += max(0,arr[i] - arr[i+1]);
    }
    
    ugNess += arr[0] + arr[n-1];

    return ugNess;
}

void solve(){
    
    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values

    ll ugNess = findUgNess(arr, n);

    for (int i = 0; i < n; i++){
        ll diff1 = arr[i] - arr[i+1];
        ll diff2 = arr[i] - arr[i-1];

        if(diff1 > 0 && diff2 > 0){
            ll comm = min(diff1, diff2);
            ugNess -= comm;
        }
    }

    cout << ugNess << endl;
}


int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t; cin >> t;
    while(t--)solve();

    return 0;
}
