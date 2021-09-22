#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> tempNums; 

        int i = 0;

        for (int i = 0; i < nums.size(); i++){
            int currentEle = nums[i];

            if (nums[i + 1] == currentEle)
            {   
                // nums.erase(nums.begin() + (i));
            }else{
                tempNums.push_back(nums[i]);
            }
            
        }

        nums = tempNums;

        for(auto item: nums){
        cout << item << ", ";
        }

        return 0;
    }
};


int main(){

    // vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    vector<int> a = {1,1,2};

    Solution s;
    s.removeDuplicates(a);   


   return 0;
}