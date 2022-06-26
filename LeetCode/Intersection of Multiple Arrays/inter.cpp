#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// COMPLETED SUBMITTED :)
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            for (int j = 0; j < nums[i].size(); j++){
                mp[nums[i][j]]++;
            }
        }   

        vector<int> ans;

        map <int, int> :: iterator it;
        for (auto &&it : mp){
            if(it.second == n)ans.push_back(it.first);
        }

        return ans;
    }
};
