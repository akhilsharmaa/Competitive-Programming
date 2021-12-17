#include <iostream>
#include <vector>
using namespace std;

// Runtime: 40 ms, faster than 11.14% of C++ online submissions for Single Number.
// Memory Usage: 17 MB, less than 48.80% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int  a = 0;

        for (int i = 0; i < n; i++){
            a = a ^ nums[i];
        }   

        return a;
    }
};

int main(){

    


   return 0;
}