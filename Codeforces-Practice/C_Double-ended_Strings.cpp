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

int longestsub(string x,string y,int n,int m){
    
    int lcs[n+1][m+1];
    int result=0;//store the maximum value of 2d array
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                lcs[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
            lcs[i][j]=1+lcs[i-1][j-1];
            result =max(result,lcs[i][j]);
            }
            else lcs[i][j]=0;
        }
    }
    return result;
}

void solve(){
    
   string s, t;
   cin >> s >> t;

   int m = s.length();
   int n = t.length();
    
   int l = longestsub(s, t, m, n);
   ll ans = (m+n)-(l*2);

   cout << ans << endl;
    
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

