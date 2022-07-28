    /* 
    Author - @akhilsharmaa
    C++ code by Akhilesh Sharma
    */
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    // SOLVED AND ACCEPTED :) 

    void solve(){
        
        // Taking INPUT Array
        ll n; cin >> n;
        vector<ll> arr(n);
        
        for (int i = 0; i < n; i++){
            cin >> arr[i]; // input-values
        }
        
        sort(arr.begin(), arr.end(), greater<int>());

        map<ll, ll> mp;
        for (int i = 0; i < n; i++){
           mp[arr[i]]++;
        }

        ll maxi = INT_MIN;

        map <int, int> :: iterator it;
        for (auto &&it : mp){
            maxi = max(maxi, it.first + it.second);
        }
        
        cout << maxi-1 << endl;
    }


    int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while(t--)solve();

    return 0;
    }

