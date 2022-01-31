#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int maxI = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            maxI = max(sum,maxI);
            if (sum < 0){ sum = 0;}
        }
        
        return maxI;
    }
};


  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){
   

   return 0;
}