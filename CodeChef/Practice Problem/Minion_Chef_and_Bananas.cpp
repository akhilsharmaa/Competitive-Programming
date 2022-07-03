/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define debug(x)     cout<<#x<<" "<<x<<"\n";


bool isPossible(vector<ll> v, ll k, ll h, ll n){

    ll c = 0;
    for(int i=0;i<n;i++){
        c+= (v[i]+k-1)/k;
        if(c>h){
			break;
		}
    }

    return c <= h;
}


int main(){
   
   int t = 1; 
   
   cin >> t;
   while(t--){

        // Taking INPUT Array
        ll n, h, ans; 
        cin >> n >> h;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++){
            cin >> v[i]; // input-values
            ans = max(ans, v[i]);
        }

        ll l = 1, r = ans + 1, mid;

        while (l <= r){
            mid = l + ((r-l)/2);
            if(isPossible(v, mid, h, n)){
                ans = min(ans, mid);
                r = mid - 1;
            }else l = mid + 1;
        }
        
        cout << ans << endl;
   }

   return 0;
}

