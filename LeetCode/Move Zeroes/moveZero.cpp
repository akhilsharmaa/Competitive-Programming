#include <bits/stdc++.h>
using namespace std;

// Runtime: 24 ms, faster than 56.21% of C++ online submissions for Move Zeroes.
// Memory Usage: 19.3 MB, less than 55.75% of C++ online submissions for Move Zeroes.


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0 || n == 1){
            return;
        }

        int left = 0 , right = 0;

        while (right < n){
            
            if(nums[right] == 0){
                right++;
            }else {
                swap(nums[left], nums[right]);
                right++;
                left++;
            }   
        }
    }
};

int main(){
    
    Solution s;

    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);

    for (auto &&i : nums){
        cout << i << " ";
    }
    

    return 0;
}