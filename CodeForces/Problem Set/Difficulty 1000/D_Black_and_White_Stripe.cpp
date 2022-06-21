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
#define MOD          100000009
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
    
   int n=0, k=0;
   string str = "";
   cin >> n >> k >> str;

   int v[n+1];
   v[0] = 0;

   int ans = 0;
   for (int i = 0; i <= n; i++){ 

       if(str[i] == 'W'){
            ans++;
       } 
       v[i+1] = ans;
   }    
    
   int mini = INT_MAX;
   for (int i = 0; i <= n - k; i++){
        mini = min(mini, v[i+k] - v[i]);
   }
   
    cout << mini << endl;
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

