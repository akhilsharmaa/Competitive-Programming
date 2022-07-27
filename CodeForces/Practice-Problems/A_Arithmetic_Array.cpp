#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// Accepted

void solve(){
    
    ll a,b,c,d,p,q,r,k,m,x,y,z;
    
    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    
    ll sum = 0;
    for (int i = 0; i < n; i++)
    sum+= arr[i]; // input-values
    
    double avg = (double)sum / (double)n;
    if(avg == 1){
        cout<< 0 << "\n";
        return;
    }

    if(n < sum){
        cout << (sum - n)<< "\n";
        return;
    }

    cout << "1\n";
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

  /* 
 __________________________________________
 |                                        |
 |  If this code helps you                |
 |  Please consider to GIVE A STAR :)     |
 |  & FOLLOW ME ON GITHUB                 |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

