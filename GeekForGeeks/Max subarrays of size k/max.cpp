#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k){

        vector<int> res;
        // int maxi = INT_MIN, i;
        // for (i = 0; i < k; i++)
        //     maxi = max(arr[i], maxi);
        
        // queue<int> que; 
        // que.push(maxi);
        // res.push_back(maxi);
        
        return res;
    }
};

int main(){

    // Taking INPUT Array
    int n, k; 
    cin >> n >> k;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    
    Solution s;
    vector<int> res = s.max_of_subarrays(arr, n, k);

    // Print Ouput of Arr-Vector 
    for (int i = 0; i < res.size(); i++){
       cout << res[i] << " " ;
    }

   return 0;
}   