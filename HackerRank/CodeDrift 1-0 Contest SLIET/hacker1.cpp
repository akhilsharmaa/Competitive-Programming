#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int main(){


    // Taking INPUT Array
    int n; cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    

    ll maxi = INT_MIN;
    ll mini = INT_MAX;

    for (auto &&i : arr){
        maxi = max(i, maxi);
        mini = min(i, mini);
    }
    

    ll ans = maxi * mini;
    cout << ans <<"\n";

   return 0;
}