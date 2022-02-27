/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

// 1613C - Poisoned Dagger SOLVED 
bool isPossible(ll k, vector<int> arr, ll n, ll target){
    
    ll cnt = 0;
    for (int i = 0; i < n; i++){

        ll curr = target;
        if(i < n-1){
            ll diff = arr[i+1] - arr[i];
            if(diff < k)  curr = diff;
        }
        cnt += min(curr ,k);
    }
    return target <= cnt;
}   

void solve(){

    ll n, toHit;
    cin >> n >> toHit;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values

    // Binary Search
    ll left = 1, right = toHit, ans;
    while (left <= right){

        ll mid = left + ((right - left) / 2);
        if (isPossible(mid, arr, n, toHit)){
            right = mid - 1;
            ans = mid;
        }
        else  left = mid + 1;
    }
    cout << ans << endl;
}

int main(){

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
