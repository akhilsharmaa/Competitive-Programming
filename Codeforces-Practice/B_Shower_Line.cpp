/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define pb           push_back
#define endl         "\n";  
#define scanVt(v,n)  for(int i=0;i<n;++i)cin >> v[i];
#define printVt(v)   for(auto&&i:v)cerr<<i<<' ';cerr<<"\n";
#define yN(ok)       cout << (ok? "YES": "NO") << endl;
#define debugln(n)   cerr <<#n<<":"<<n<<endl;
#define debug(n)     cerr <<#n<<":"<<n<<' ';

// Function to find the permutations
ll mx = 0;
int mat[5][5]; 

void findPermutations(){
  
    vector<int> a = {0, 1, 2, 3, 4};

    do {
      // printVt(a)
      ll x = (mat[a[0]][a[1]] + mat[a[1]][a[0]] + mat[a[2]][a[3]] + mat[a[3]][a[2]]) + 
             (mat[a[1]][a[2]] + mat[a[2]][a[1]] + mat[a[3]][a[4]] + mat[a[4]][a[3]]) + 
             (mat[a[2]][a[3]] + mat[a[3]][a[2]])+ 
             (mat[a[3]][a[4]] + mat[a[4]][a[3]]) ;
      
      mx = max(mx, x);
      // debug(x);
      
    } while (next_permutation(a.begin(), a.end()));
    
    cout << mx << endl;
}


// Driver code
int main(){
  
  #ifndef ONLINE_JUDGE
  freopen("inputf.in","r",stdin);
  freopen("outputf.in","w",stdout);
  freopen("errorf.in","w",stderr);
  #endif
  
  for (int i = 0; i < 5; ++i){
    for (int j = 0; j < 5; ++j){
      cin >> mat[i][j];
    }
  }
    
  vector<int> a = {1, 2, 3, 4, 5};  
  findPermutations();

  return 0;
}
