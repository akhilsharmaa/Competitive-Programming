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
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<"\n";


void solve(){
     
    // Taking INPUT Array
    int n=0, m=0; 
    cin >> n >> m;
    int p[m], v[n];
    
    for (int i = 0; i < n; i++) cin >> v[i]; // input-values
    for (int i = 0; i < m; i++) cin >> p[i]; // input-values

    int left[n], right[n];
    ll l = -1, r = -1;
    for (int i = 0; i < n; i++){
        if(v[i] == 1) l = i;
        left[i] = l;
    }

    for (int i = n-1; i >= 0; i--){
        if(v[i] == 2) r = i;
        right[i] = r;
    }


    for (int i = 0; i < m; i++){
        
        ll g = p[i]-1;
        ll leftT = left[g], ans = -1;
        ll rightT = right[g];

        if(leftT == -1 && rightT == -1){
            ans = -1;
        }else if(leftT == -1){
            ans = rightT - g;
        }else if(rightT == -1){
            ans =  g - leftT;
        }else {
            ans =  min(abs(g - leftT), abs(rightT - g));
        }

        if(g == 0)ans = 0;

        cout << ans << " ";
    }

    cout << endl;
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0;
   cin >> t ;
   while(t--){
       solve();
   }
   return 0;
}

