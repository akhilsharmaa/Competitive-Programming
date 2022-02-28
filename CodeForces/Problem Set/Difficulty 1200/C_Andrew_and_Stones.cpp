/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
// 1637C - Andrew and Stones SOLUTION 

void solve(){

    // Taking INPUT Array
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // input-values

    if (n == 3 && arr[1] % 2)
    {
        cout << -1 << endl;
        return;
    }

    ll k = 1;
    while (k < n - 1 && arr[k] == 1)
        k++;

    if (k == n - 1){
        cout << -1 << endl;
        return;
    }

    ll ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        ans += (arr[i] + 1) / 2;
    }

    cout << ans << endl;
}

int main()
{

    // For Faster Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tCase;
    cin >> tCase;

    while (tCase--)
    {
        solve();
    }

    return 0;
}
