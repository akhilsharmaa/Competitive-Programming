/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

void solve(){
    
   ll n,m,k;
   cin>>n>>m>>k;    
   k-= 2;

   if(m < n - 1 || 
      m > n*(n-1)/2 ||  k <= -1 )pNo
   else if(k == 0){
       if(n == 1)pYes else pNo
   }else if(k == 1){
       if(m == n * (n - 1)/2)pYes
       else pNo
   }else pYes 
    
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   int t; cin >> t;
   while(t--)solve();

   return 0;
}

