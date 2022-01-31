#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        
        vector<vector<int>> merged;
        
        // Edge case
        if (intervals.size() == 0) return merged;

        // Sorted the interval vector 
        // time complexity : O(log n) 
        sort(intervals.begin() , intervals.end());

        vector<int> tempInterval = intervals[0];
        for (auto it : intervals){
            if (it[0] <= tempInterval[1]){
                tempInterval[1] = max(it[1], tempInterval[1]);
            }else {
                merged.push_back(tempInterval);
                tempInterval = it;
            }   
        }

        merged.push_back(tempInterval);
        return merged;
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

    Solution s;
    vector<vector<int>> vec = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = s.merge(vec);

    for (int i = 0; i < res.size(); i++){
        cout<< res[i][0] << "," << res[i][1] <<endl;
    }
    


   return 0;
}