#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
       unordered_map<int, int> freq;
        for(int &num: nums)
            ++freq[num];
        
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if(freq[a] == freq[b])
                return a > b;
            return freq[a] < freq[b];
        });
        
        return nums;
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
      vector<int> v = {1,1,2,2,2,3};
      vector<int> r  =  s.frequencySort(v);

      for (auto &&i : r){
         cout << i << " ";
      }
      


   return 0;
}