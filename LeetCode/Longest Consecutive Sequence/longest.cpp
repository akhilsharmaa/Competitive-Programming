#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();

        unordered_set<int> st;
        for(auto &&i : nums)
            st.insert(i);

        int maxi = 0;
        for (int i = 0; i < n; i++){
            if(st.find(nums[i] - 1) == st.end()){

                int j = nums[i], c= 0;
                while (st.find(j) != st.end()){
                    c++, j++;
                }

                maxi = max(maxi, c);
            }
        }
        
        return maxi;
    }
};

int main(){
    

   return 0;
}