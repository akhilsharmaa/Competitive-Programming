#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int main(){

int testCase;
cin >> testCase;
   
while(testCase--){
  
    //* Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    

    int maxi = INT_MIN, max_ind = 0;
    for (int i = 0; i < n ; i++){
        if(arr[i] > maxi){
            max_ind = i;
        }
        maxi = max(arr[i], maxi);
    }
        

    int mini = INT_MAX, min_ind = 0;
    for (int i = 0; i < n ; i++){
        if(arr[i] < mini){
            min_ind = i;
        }
        mini = min(arr[i], maxi);
    }
   
    
    ll mFrom_left = max(min_ind, max_ind);
    ll mFrom_right = max(n - min_ind,n - max_ind);

    ll left = min(min_ind, max_ind);
    ll right = min(n - min_ind,n - max_ind);
    
    ll mFrom_Both = left+ right;

    // cout << "ml= " <<  mFrom_left << " | mr = " << mFrom_right << " mb = " << mFrom_Both << "\n";


    cout << min(mFrom_Both, min(mFrom_left, mFrom_right)) << "\n";

}

return 0;
}