#include <bits/stdc++.h>
using namespace std;

/* MAXIMIZE your profit by choosing a single day to 
   buy one stock and choosing a different day in the 
   future to sell that stock.
 */

/* Runtime: 112 ms, faster than 78.71% of C++ online
   submissions for Best Time to Buy and Sell Stock.
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++){
            buy = min(buy, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buy);
        }   

        return maxProfit;
    }
};

int main(){
   
    Solution s;
    vector<int> nums = {7,1 ,5,3,6,4};
    cout<< s.maxProfit(nums);

   return 0;
}