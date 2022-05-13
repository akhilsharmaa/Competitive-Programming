#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Runtime: 106 ms, faster than 38.33% of C++ 
    online submissions for Jump Game.
    Memory Usage: 48.4 MB, less than 77.42% 
    of C++ online submissions for Jump Game.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int highest = nums[0];

        for (int i = 0; i < n; i++){

            if(i > highest)return false;

            int curr = nums[i] + i;
            highest = max(highest, curr);
        }

        return true;
    }
};

int main(){

   Solution s;
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   
   cout << s.canJump(arr) ;

   return 0;
}