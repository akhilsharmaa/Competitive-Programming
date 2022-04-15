#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k){

        vector<int> res;
        for (int i = k-1; i < n; i++){

            int j = 0, maxi = INT_MIN;
            while (j < k){
                maxi = max(arr[i - j],maxi);
                j++;
            }

            res.push_back(maxi);
        }
        
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