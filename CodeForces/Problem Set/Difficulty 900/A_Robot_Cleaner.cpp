#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

// Accepted

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       int n, m, i, j, ti, tj;
        cin >> n >> m >> i >> j >> ti >> tj;

        int di = 1, dj = 1, ans = 0;

        while (i != ti && j != tj){
            
            if(i + di > n || i + di < 1) di *= -1;
            if(j + dj > m || j + dj < 1) dj *= -1;
            i += di;
            j += dj;
            ans++;

        }
        
        cout << ans << "\n";
      
   }

   return 0;
}