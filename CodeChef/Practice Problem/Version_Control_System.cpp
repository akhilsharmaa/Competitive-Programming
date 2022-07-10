/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
     
     ll n,x,y,a;
    int v[101]={0};
    cin>>n>>x>>y;
    for(int i=1;i<=x;i++)cin>>a,v[a]++;
    for(int i=1;i<=y;i++)cin>>a,v[a]++;

    int cnt1=0,cnt2=0;
    for(int i=1;i<=n;i++){
        if(!v[i])cnt2++;
        else if(v[i]==2)cnt1++;
    }

    cout<<cnt1<<' '<<cnt2<<"\n";
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

