#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    void helper(vector<int>& nums, int i , int target,vector<int> &sets){

        while (nums[i] == nums[i+1]){
            i++;
        }
        

        if(i == nums.size()){
            if(target == 0)
                result.push_back(sets);
            return;
        }

        sets.push_back(nums[i]);
        helper(nums, i+1, target-nums[i], sets);

        sets.pop_back();
        helper(nums, i+1, target, sets);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        sort(candidates.begin(), candidates.end());
        helper(candidates, 0, target, ans);

        return result;
    }
};


int main(){

    // Taking INPUT Array
    int n, target; 
    cin >> n >> target;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values

    Solution s;
    vector<vector<int>> answer = s.combinationSum2(arr, target);

    // Print Ouput of Arr-Vector 
    for (int i = 0; i < answer.size(); i++){
        for (int j = 0; j < answer[i].size(); j++){
            cout << answer[i][j] << " " ;
        }cout << "\n";
    }

}
