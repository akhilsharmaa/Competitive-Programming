#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 268B - Buttons ACCEPTED :) 

void solve(){
    
   ll n;
   cin >> n;

   ll sum = 0;

    cin>>n;
    for(int i=0;i<n;i++){
        sum+=(i+1)*(n-i)-i;
    }

    cout<<sum<<endl;
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();
   

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

