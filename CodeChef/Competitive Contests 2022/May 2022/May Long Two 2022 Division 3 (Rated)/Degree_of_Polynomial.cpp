/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vt vector
#define pb push back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define all(V) (V).begin(),(V).end()
#define printv(v) for(auto&&i:v)cout<<i<<' ';


void solve(){
    
   // Taking INPUT Array
   int n = 0; cin >> n;
   vector<int> v(n);
   
   for (int i = 0; i < n; i++)
   cin >> v[i]; // input-values
   
   for (int i = n-1; i >= 0; i--){
       if(v[i] != 0){
           cout << i <<endl;
           return;
       }
   }

}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0; cin >> t;
   while(t--)
     solve();

   return 0;
}

