#include <bits/stdc++.h>
using namespace std;

/*
Runtime: 18 ms, faster than 39.48% of C++ online submissions for Combination Sum.
Memory Usage: 10.7 MB, less than 89.32% of C++ online submissions for Combination Sum.
Next challenges: */

class Solution {
public:
    void findCombination(int index, int target, vector<int> &arr, vector<vector<int>> &ans,  vector<int> &ds){
        
        // Base condition
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }return;
        }

        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findCombination(index, target - arr[index], arr, ans,ds);
            ds.pop_back();
        }

        findCombination(index+ 1, target, arr, ans,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector <int> ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};


int main(){
    

    return 0;
}