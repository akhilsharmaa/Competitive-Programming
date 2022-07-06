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
#define debug(x)     cout<<#x<<" "<<x<<"\n";


void solve(){

   // Taking INPUT Array
   ll n = 0, k; 
   cin >> n >> k;
   unordered_set <int> st;
     
   for (int i = 0; i < n; i++){
   		int input; cin >> input;
   		st.insert(input);
   }
   
   ll i = 0;
   while (1){
        if(st.find(i) == st.end()){
            if(k > 0){
                k--;
            }else {
                cout << i << endl;
                return;
            }
        }

        i++;
   }
    

   cout << i << endl;
}



int main(){

   int t = 1; 
   
   cin >> t;
   while(t--){
     solve();
   }

   return 0;
}

