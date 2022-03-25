#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Success
// Details 
// Runtime: 128 ms, faster than 49.43% 
// of C++ online submissions for Contains Duplicate.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        int cnt =  0;
        map <int, int> :: iterator it;
        bool flag = false;
        for (auto &&it : mp){
           if(it.second >= 2)flag = true;
        }

        return flag;
    }

};

int main(){

    Solution s;
    vector<int> vt = {1,1,1,3,3,4,3,2,4,2};
    s.containsDuplicate(vt);
   
   return 0;
}