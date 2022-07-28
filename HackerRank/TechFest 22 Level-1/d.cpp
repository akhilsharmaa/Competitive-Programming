/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
// Taking INPUT Array
int n; cin >> n;
vector<int> arr(n);

for (int i = 0; i < n; i++)
cin >> arr[i]; // input-values


    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
   
    if(sum)cout << "-1\n";
    else{

        
    }
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   solve();

   return 0;
}

