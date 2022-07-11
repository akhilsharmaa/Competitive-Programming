/* ~ Akhilesh Sharma  */
#include <bits/stdc++.h>
using namespace std;

/*
Runtime: 25 ms, faster than 68.72% of C++ online submissions for Missing Number.
Memory Usage: 19.1 MB, less than 5.65% of C++ online submissions for Missing Number. */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i <= n; i++)
            nums.push_back(i);

        n = nums.size();
        int x = 0;

        for (int i = 0; i < n; i++){
            x = nums[i] ^ x;
        }

        return x;
    }
};


int main(){
    

        Solution s; 
        vector<int> v = {1, 2, 3};
        s.missingNumber(v);


    return 0;
}

