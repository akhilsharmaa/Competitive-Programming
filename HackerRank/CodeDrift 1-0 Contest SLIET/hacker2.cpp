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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    
    ll sum = 1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++){
            sum *= (abs(arr[i] - arr[j]));
    }
    
    cout << sum % 998244353 <<"\n" ;

   return 0;
}