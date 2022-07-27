#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1294A - Collecting Coins ACCEPTED 

void solve(){
    
  vector<ll> arr(3);
  for (int i = 0; i < 3; i++)
  cin >> arr[i]; // input-values
  ll n;cin >> n;

  sort(arr.begin(), arr.end());
  ll diff = (arr[2] - arr[1]) + (arr[2] - arr[0]);

  if(n - diff >= 0){
        n -= diff;
        if(n % 3 == 0)pYes
        else pNo 
  }else pNo

}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}


