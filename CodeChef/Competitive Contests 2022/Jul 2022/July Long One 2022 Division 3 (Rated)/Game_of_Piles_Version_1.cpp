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
    int n = 0, twos= 0; 
    cin >> n;
    vector<int> v(n);
    
    ll sum = 0;
    bool chef = false;
    for (int i = 0; i < n; i++){
        cin >> v[i]; // input-values
        sum += v[i];
        if(v[i] == 1)chef = 1;
        if(v[i] == 2) twos++;
    }
     
    if(chef == true){
        cout << "CHEF\n"; return;
    }else if(n == 1){
        if(v[0] % 2 == 0) cout << "CHEFINA\n";
        else cout << "CHEF\n"; return;
    }

    if((sum-((n-twos)*2)) % 2 == 0){
        cout << "CHEFINA\n";
    }else 
        cout << "CHEF\n";

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

