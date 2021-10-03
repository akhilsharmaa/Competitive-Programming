#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    // ACCEPTED :) ...
    int searchInsert(vector<int>& nums, int target) {
        
        int p1 = 0, p2 = nums.size();
        bool isFind = false;

        int count = 0;
        while (p1 < p2){    
            int center = p1 + (p2 - p1)/2;
            
            if (nums[center] == target){ 
                return center;
            }else if(nums[center] > target){
                p2 = center;
            }else {
                p1 = center + 1;
            }
        }
        
        return p1;
    }
};


int main(){

    vector<int> a = {1, 2, 3 ,14 ,35 ,36, 38, 42, 54, 65, 76};
    Solution s;
    s.searchInsert(a, 65);

   return 0;
}