#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        

        // MIN HEAP of MAP 
        priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > minHeap;

        for (auto i = mp.begin() ; i != mp.end() ; i++){
            minHeap.push({i->second, i->first});
            if (minHeap.size() > k){
                minHeap.pop();
            }
        }
        
        vector<int> vec;
        for (int i = 0; i < k; i++){
            vec.push_back(minHeap.top().second);
            minHeap.pop();
        }
        

        return vec;
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