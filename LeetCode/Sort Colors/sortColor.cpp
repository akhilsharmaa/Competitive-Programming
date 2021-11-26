#include <bits/stdc++.h>
using namespace std;

// sort 0s, 1s, and 2s.

// ACCEPTED :) 
/*Runtime: 0 ms, faster than 100.00% of C++ online
  submissions for Sort Colors. */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // Pointers LOW | MID | HIGH
        int low = 0, mid = 0, high = nums.size() -1;

        while (mid <= high){
            switch (nums[mid]){
            case 0: 
                swap(nums[low++], nums[mid++]);
                break; 
            case 1: 
                mid++;
                break;
            case 2: 
                swap(nums[high--], nums[mid]);
                break; 
            default:
                break;
            }
        }
    }
};


int main(){
   
    Solution s;

    vector<int> nums = {1,2,0};
    s.sortColors(nums);


   return 0;
}