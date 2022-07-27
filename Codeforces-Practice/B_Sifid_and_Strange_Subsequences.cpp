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
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){

   int n = 0; cin >> n;
   vector<int> v(n);

   int cnt = 0, mini = INT_MAX;

   for (int i = 0; i < n; i++){
      cin >> v[i];
      if(v[i]<=0) cnt +=1;
      else mini = min(v[i], mini);
   }

   sort(all(v));

   if(v[0]>0) {
      cout<<"1\n"; return;
   }
         
   int miniDiff = INT_MAX-1;
   for (int i = 0; i < n; ++i) {
      if(i+1 < n && v[i] <= 0){
         miniDiff = min( miniDiff, v[i+1] - v[i]);
      }
   }

   if(miniDiff >= mini)cnt++;

   std::cout << cnt << endl;
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

