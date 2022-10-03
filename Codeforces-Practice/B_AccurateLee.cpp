/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl         "\n";  
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)        v.begin(), v.end()
#define MOD          1e9 + 7


void solve(int t){ 

    int n;
    string str;
    cin >> n >> str;
    
    int zeros = 0, ones = n-1, one_cnt = 0;
    string a = "", b = "";
    
    while(zeros < n && str[zeros] == '0'){
      a += '0';
      zeros ++;
    }
    
    while(ones >= 0 && str[ones] == '1'){
      b += '1';
      ones--;
    }
    
    if(ones - zeros >= 1){
      a += '0';
    }
    
    cout << a  << b << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve(t);

  return 0;
}

