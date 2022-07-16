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

bool palindrome(vector<int> v, int k){

    ll l = 0, r = v.size()-1;
    while (l <= r){ 
        if(v[l] == k){ l++; continue; }
        if(v[r] == k){ r--; continue; }
        if(v[l] != v[r]) return false;
        l++, r--;
    }

    return true;
}

void solve(){
    

   int n; cin >> n;  
   vt<int> v(n);
   loop(i, 0, n-1) cin >> v[i];
    
    // printv(v);

   bool flag = true;
   for (int i = 0; i < n-1-1; i++){
       if(v[i] != v[n-1-i]){
           flag = palindrome(v, v[i]) || 
                    palindrome(v, v[n-1-i]);
            break;
       }
   }
    
   if(flag)pYes
   else pNo 
    
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

