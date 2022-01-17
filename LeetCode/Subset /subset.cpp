#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subsets.
Memory Usage: 7.1 MB, less than 83.66% of C++ online submissions for Subsets.
*/

class Solution {
public:

    void helper(vector<int>& nums, int i, vector<int> &sets, vector<vector<int>> &result) {

        if(i == nums.size()){
            result.push_back(sets);
            return;
        }

        sets.push_back(nums[i]);
        helper(nums, i+1, sets, result);

        sets.pop_back();
        helper(nums, i+1, sets, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> sets;
        helper(nums, 0, sets, result);

        return result;
    }
};


int main(){

    vector<int> arr = {1, 2, 3};
    Solution s;
    vector<vector<int>> v = s.subsets(arr);


    // Print Ouput of Arr-Vector 
    for (auto && i : v){
       for (auto && j : i){
          cout << j << " " ;
       }cout << "\n" ;
    }

    return 0;
}