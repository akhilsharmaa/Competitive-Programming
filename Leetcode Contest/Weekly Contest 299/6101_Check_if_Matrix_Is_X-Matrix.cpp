/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

        set<pair<int, int>> st; 

        bool flag = true;
        for (int i = 0; i < grid.size(); i++){
            if(grid[i][i] == 0)return false;
            st.insert({i, i});
        }
        
        int j = grid.size()-1;
        for (int i = 0; i < grid.size(); i++, j--){
            if(grid[j][i] == 0)return false;
            st.insert({j, i});
        }

        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[i].size(); j++){
                
                if (st.find({i, j}) != st.end()) {
                    continue;
                }

                if(grid[i][j])return false;
            }
        }
        

        return flag;
    }
};

