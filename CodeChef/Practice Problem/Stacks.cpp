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
    int n = 0; cin >> n;
    vector<int> v(n), res;
    
    for (int i = 0; i < n; i++)
        cin >> v[i]; // input-values
    

    for (int i = 0; i < n; i++){
     
        ll rad = v[i];
        auto it = upper_bound(res.begin(), res.end(), rad);
        if(it == res.end()){
            res.push_back(rad);
        }else {
            *it = rad;
        }
        
    }

    cout << res.size() << " ";
    printv(res);
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

