/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


ll n = 0, w, l; 
vector<pair<ll, ll>> v;

bool isPossible(ll k){

    ll cnt = 0;

    for (int i = 0; i < v.size(); i++){

        if(v[i].first + v[i].second * k >= l){
			cnt+= (v[i].first + v[i].second*k);
			if(cnt>=w) return true;
		}   
        
    }

    return false;
}

int main(){

    cin >> n >> w >> l;
    
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    
    ll left = 0, right = w, ans = -1;

    while (left <= right){  

        ll mid = left + (right-left)/2;
        if(isPossible(mid)){
            ans = mid;
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    
    cout << ans << endl;

   return 0;
}

