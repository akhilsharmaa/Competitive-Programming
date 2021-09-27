#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) 
            return 0;

        int j = 0; 

        for (int i = 0; i < nums.size(); i++){ 
            if (nums[i] != nums[j]){
                j ++;
                nums[j] = nums[i]; 
            }
        }

        return j + 1;
    }
};


int main(){

    // vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    vector<int> a = {1,1,2, 2, 3, 3,3 , 4};

    Solution s;
    cout<< s.removeDuplicates(a);   


   return 0;
}