#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int main(){

    ll n, t;

    cin >> n >> t;

   vector<int> Pos(n);
   for (int i = 0; i < n; i++)
   cin >> Pos[i]; // input-values
   
   vector<int> Speed(n);
   for (int i = 0; i < n; i++)
   cin >> Speed[i]; // input-values
   
    vector<int> Final(n);
    for (int i = 0; i < n; i++){
        Final[i] = Pos[i] + (Speed[i] * t) ;
    }

    // ===============================

    ll count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i != j){

                if(Final[i] > Final[j] && Pos[i] < Pos[j]){
                    count++;
                }

            }    
        }
    }

    cout << count << "\n";
    
   

   return 0;
}