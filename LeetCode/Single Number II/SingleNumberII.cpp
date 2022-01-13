#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 12 ms, faster than 40.83% of C++ online submissions for Single Number II.
Memory Usage: 9.6 MB, less than 54.84% of C++ online submissions for Single Number II.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;
        for (int i = 0; i < 32; i++){
            
            int sum = 0;
            for (int j = 0; j < nums.size(); j++){
                if(((nums[j] >> i) & 1) == 1)
                sum ++;
            }

            sum %= 3;
            if(sum != 0){
                ans |= sum << i;
            } 
        }

        return ans;
    }
};

int main(){


    return 0;
}