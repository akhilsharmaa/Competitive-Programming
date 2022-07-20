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


void solve(){
     
    // Taking INPUT Array
    int n = 0; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i]; // input-values
    }

    sort(v.begin(), v.end());

    ll atkVal = 0,  defVal = 0;
    ll f= 0, g= 0, k= 0;
    
    if(n%2 == 0){
        f = n/2;
        g = n/2;
    }else {
        f = (n/2) +1 ;
        g = n - f;
    }

    while (f!= 0){
        atkVal+= v[k];
        k++, f--;
    }

    while (g!= 0){
        defVal+= 1000 - v[k];
        k++, g--;
    }
    

    cout << atkVal * defVal << endl;
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

