/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"No"<<endl;
#define pYes         cout<<"Yes"<<endl;


void solve(){
    
   ll u, v, a, s;
   cin>>u>>v>>a>>s;


   if(v*v >= (u*u) + (2* -1 *a*s)){
        pYes
   }else pNo

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

