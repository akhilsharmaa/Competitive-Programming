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
    
   // Taking INPUT Array
   int n = 0; cin >> n;
   vector<int> v(n);
   
   for (int i = 0; i < n; i++)
   cin >> v[i]; // input-values

   if(n % 2 == 1){
       cout <<"Mike\n";
       return; 
   }

   ll mini = LONG_LONG_MAX;
   ll minimumIndex = -1;

   for (int i = 0; i < n; i++){
      if(v[i] < mini){
        mini = v[i];
        minimumIndex = i;
      }
   }

   if(minimumIndex % 2 == 0){
      cout << "Joe\n";
   }else 
      cout << "Mike\n" ;

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





