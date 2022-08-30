#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl           "\n";    
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define akhilfastIO cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)          v.begin(), v.end()
#define MOD          1e9 + 7

ll cnt = 0;

// Minimizing Coins

void func(ll n ){ 
    
    if(n <= 0)return;
    cnt++;
        
    ll temp = n, mx = 0;
    
    while(temp > 0){
        mx = max(mx, temp % 10);
        temp /= 10;
    }
    
    func(n - mx);
}


int main(){

  akhilfastIO
   
  ll n; cin >> n;
  func(n); 
  cout << cnt << endl;
  
  return 0;
}

