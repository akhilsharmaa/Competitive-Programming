#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int maxElement = nums[0];
       int elementCount = 1;
       int size = nums.size();

       for (int i = 1; i < size; i++){

           if (nums[i] == maxElement){
               elementCount++;
           }else {
               elementCount--;
               if (elementCount == 0){
                    maxElement = nums[i];
                    elementCount = 1;
               }
           }
       }
    
        return maxElement;
    }
};

int main(){
    
    Solution s;
     vector<int> nums = {2,2,1,1,1,2,2};
    cout<< s.majorityElement(nums);

   return 0;
}