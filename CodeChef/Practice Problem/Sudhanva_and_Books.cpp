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
     
   
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t ;
    vector<int> vt;

   while(t--){

        ll n, m;
        cin >> n;

        if(n != -1){
            cin >> m;
            vt.push_back(m);
        }else {

            if(vt.size() == 0){
                cout << "kuchbhi?\n";
            }else {
                cout << vt[vt.size()-1] << endl;
                vt.pop_back();
            }
        }

   }
   return 0;
}

