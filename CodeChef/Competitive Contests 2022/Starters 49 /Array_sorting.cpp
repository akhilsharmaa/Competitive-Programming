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
    vector<int> v(n), temp(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];  
        temp[i] = v[i];
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++){
        if(temp[i] != v[i]){
            temp[i] = -1;
        }else {
            temp[i] = 1;
        }
    }

    int l = 0;
    for (int i = 0; i < n; i++){
        if(temp[i] == -1){
            l = i;
            break;;
        }
    }   

    int r = 0;
    for (int i = n-1; i >= 0; i--){
        if(temp[i] == -1){
            r = i;
            break;;
        }
    }   

    cout << r - l<< endl;

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

