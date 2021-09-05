#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// From Leet Code
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {

        unordered_map<int, int> m;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
        // not found the second one
            if (m.find(nums[i]) == m.end() ) {
            // store the first one poisition into the second one's key
                m[target - nums[i]] = i;
            } else {
            // found the second one
                result.push_back(m[nums[i]]);
                result.push_back(i);
                break;
            }
        }

        return result;
    };
};


int main(){
    cout<<"MAIN FUNCTION OUTPUT :- "<<endl;

    vector<int> nums ;
    nums.push_back(3);
    nums.push_back(3);
    // nums.push_back(4);

    vector<int> a = Solution().twoSum(nums, 6);
    cout<< a[0] << " "<<  a[1] << endl;


   return 0;
}