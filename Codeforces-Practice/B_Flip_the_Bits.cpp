/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl           "\n";    
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)          v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

    int n; cin >> n;
    string a, b; cin >> a >> b;
    
    a.push_back('0');
    b.push_back('0');
    n++;
    
    queue<int> que;
    bool comp = a[0] == b[0];
    
    int one = 0, zero = 0;
    for (int i = 0; i < n; ++i){
      one += a[i] == '1';
      zero += a[i] == '0';
      if(one == zero)que.push(i+1);
    }
    
    string temp= "";
    for (int i=0;i<n;++i)temp+='0';

    for (int i = 0; i < n; ++i){
      
      if(que.size() > 0){
        if(que.front() == i){
          comp = a[i] == b[i];
          que.pop();
        }
      }
      
      temp[i] = (comp == (a[i] == b[i]) ? 'T':'F');
    }
    
    bool ok = true;
    debug(temp);
    
    for(auto i: temp){
      if(i == 'F'){
        ok = false;
      }
    }
    
    
    cout << (ok ? "YES": "NO") << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

