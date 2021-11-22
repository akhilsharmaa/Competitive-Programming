#include <bits/stdc++.h>
using namespace std;


// Working on my machine only

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> vec = {{1}, {1,1},{1,2,1}};

        // Edge Cases 
        if (numRows == 1) return {{1}};
        if (numRows == 2) return {{1,1}};
        if (numRows == 3) return {{1,2,1}};
         

        for (int i = 2; i < numRows - 1; i++){

            vector<int> temp;
            temp.push_back(1);
            for (int j = 0; j <= i; j++){
                temp.push_back(vec[i][j] + vec[i][j + 1]);
            }
            vec.push_back(temp);
        }

        return vec;
    }
};

int main(){

    Solution s ;
    vector<vector<int>> ans = s.generate(5);

    int space = ans.size();

    for (int i = 0; i < ans.size(); i++){

        for (int j = space; j > 0; j--){
            cout << " ";
        }space --;

        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }cout <<endl;
    }
    

   return 0;
}