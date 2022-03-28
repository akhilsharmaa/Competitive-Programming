/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   int a, b, c, d;
   cin >> a >> b >> c >> d;

   int t = (a * 60 * 60) + b * 60;
   int A = (c * 60 * 60) + d * 60 + 1;

   if(t > A){
       cout << "Aoki\n";
   }else 
       cout << "Takahashi\n";

    
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();
   

   return 0;
}

