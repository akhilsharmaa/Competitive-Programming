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
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

void solve(){

    // Taking INPUT Array
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(n+1);

    for (int i = 0; i < n; i++){

        cin >> arr[i];
        while (arr[i] > n){
            arr[i] /= 2;
        }

        freq[arr[i]]++;
    }


    bool flag = true;
    for (int i = n; i > 0; i--){
        if(freq[i] == 0){
            flag = false;
            break;
        }
        freq[i/2] += freq[i]-1;
    }

    if(flag)pYes 
    else pNo
}

int main(){

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
