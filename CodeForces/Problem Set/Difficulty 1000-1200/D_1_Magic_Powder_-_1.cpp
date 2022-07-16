/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// D1 - Magic Powder - 1 SOLVED 
bool possible(ll ingred[], ll have[], ll toMake, ll n, ll mPow){

    ll reqIngred[n], reqMPowder = 0;

    for (ll i = 0; i < n; i++){
        reqIngred[i] = ingred[i] * toMake;
        ll r = reqIngred[i] - have[i];
        if (r < 0)
            r = 0;
        reqMPowder += r;
    }

    return mPow >= reqMPowder;
}

void solve(){
    
    ll n, magicPow;
    cin >> n >> magicPow;

    ll ingred_arr[n];
    ll have_arr[n];
    for (ll i = 0; i < n; i++)cin >> ingred_arr[i];
    for (ll i = 0; i < n; i++)cin >> have_arr[i];

    //! JUST FOR HANDLING A EDGE CASE
    if (n == 1){
        ll cnt = (have_arr[0] + magicPow) / ingred_arr[0];
        cout << cnt << endl;
        return;
    }

    //? Binary Search
    ll left = 0, right = MOD, ans;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (possible(ingred_arr, have_arr, mid, n, magicPow)){
            left = mid + 1;
            ans = mid;
        }
        else right = mid - 1;
    }

    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}
