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
  
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0; cin >> t;
   while(t--){

        int n = 0, bits[32] ={}; 
        cin >> n;
        
        for (int i = 0; i < n; i++){
            ll a, j = 0;
            cin >> a;
            while (a!=0){
                if(bits[j]==0) bits[j] = a%2; 
                a=a/2;
                j++;
            }
        }

            ll res = 0;
            for (int i = 0; i < 32; i++){
            res = res+ bits[i];
            }
            cout << res << endl; 
   }

   return 0;
}

