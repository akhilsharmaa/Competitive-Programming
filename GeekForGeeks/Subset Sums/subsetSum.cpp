#include <bits/stdc++.h>
using namespace std;

// Solved Accepted :) 
class Solution{
public:
    void func(int ind, int sum, vector<int> arr, int N, vector<int> &sumSubset){
        if(N == ind){
            sumSubset.push_back(sum);
            return;
        }

        // Pick the element 
        func(ind +1, sum + arr[ind], arr, N, sumSubset);

        // Not pick element 
        func(ind +1, sum , arr, N, sumSubset);
    }

    vector<int> subsetSums(vector<int> arr, int N){
        vector<int> sums;
        func(0, 0, arr, arr.size(), sums);
        sort(sums.begin(), sums.end());
        return sums;
    }
};

int main(){
    
    Solution s;
    vector<int> arr = {3, 1, 2};
    vector<int> v = s.subsetSums(arr, arr.size());

    for (auto &&i : v){
        cout << i <<  " ";
    }
    

    return 0;
}