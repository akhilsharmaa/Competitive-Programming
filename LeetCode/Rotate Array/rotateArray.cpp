#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    // Not Accepted :)
    void rotate(vector<int>& nums, int k) {
        vector<int> tempNums;
        // First Loop should run until  
        for (int i = nums.size() - k; i < nums.size(); i++){
            tempNums.push_back(nums[i]);
        }

        for (int i = 0; i <= k; i++)
        {
            tempNums.push_back(nums[i]); 
        }
        
        nums = tempNums;
    }
};

int main(){

    Solution s ;
    vector<int>  nums = {1,2,3,4,5,6,7};
    cout<< "Output Should = [5,6,7,1,2,3,4] "<< endl;
    s.rotate(nums, 3);
   


   return 0;
}