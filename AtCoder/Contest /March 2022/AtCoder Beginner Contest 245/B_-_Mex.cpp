/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
     

    for(ll ans=0;ans<=n;ans++){
        bool ok=true;
        for(ll x:arr){
            if(x==ans)ok=false;
        }
        if(ok){
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}