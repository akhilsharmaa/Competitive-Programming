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

    int n, m; 
    cin >> n >> m;
    
    // int mat[n][m];
    vector<vector<int>> mat(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> mat[i][j];
        }
    }
    
    for (int i = n-1; i >= 0; --i){
        for (int j = m-1; j >= 0; --j){
                    
            if(i == 0 || j == 0 || 
               j == m-1 || i == n-1)
            continue;        
                    
            int mn = min(mat[i][j+1], mat[i+1][j]);
            int mx = max(mat[i][j-1], mat[i-1][j]);
                    
            if(mn <= mx){
                cerr << "1st\n";
                cout << -1 << endl;
                return;
            }
            
            if(mat[i][j] == 0){
                mat[i][j] = mn-1;
            }
        }
    }

    
    // Check If valid Mat; 
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < m; ++j){
            int mx = max(mat[i][j-1], mat[i-1][j]);
            
            if(mx >= mat[i][j]){
                cerr << "2nd\n";
                cout << -1 << endl;
                return;
            }
        }
    }
    
    
    ll sum = 0;
    for(auto i: mat){
        for (auto j : i){  sum += j;
            cerr << j << ' ';
        }cerr << endl;
    }cerr << "\n";

    cout << sum << endl;
}


int main(){

  fastIO 
  int t = 1;; while(t--) solve();

  return 0;
}



// To study data defination commands (
// create , alter , truncate, drop)