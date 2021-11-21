#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Un-Ordered Map 
        unordered_map <int, int> mp;

        int numSize = nums.size(); // Arr Size
        for (int i  = 0;  i < numSize; i++)
            mp[nums[i]]++; 
        
        int largest = 0, toReturn;

        for (auto i = mp.begin() ; i != mp.end(); i++){
            if(i->second > largest){
                largest = i-> second;
                toReturn = i-> first;
            }
        }
        
        return toReturn;
    }
};

int main(){
    
    Solution s;
     vector<int> nums = {2,2,1,1,1,2,2};
    cout<< s.majorityElement(nums);

   return 0;
}