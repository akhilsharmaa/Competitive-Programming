#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int left = 0, right = nums.size() -1; 
        int mid;

        //! BOUNDARY CASE
        if (right == 0)return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[right] != nums[right -1]) return nums[right];
        

        while (left <= right){
            mid = left + ( right - left)/2;

            //! Unique element condition 
            if (nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) 
                return nums[mid];
                
            if ((mid % 2 == 0 && nums[mid] == nums[mid +1]) || 
                 mid % 2 != 0 && nums[mid] == nums[mid -1]){
                     left = mid +1;
            }else
                 right = mid -1;
        }

        return -1;
    }
};


int main(){
   

   return 0;
}