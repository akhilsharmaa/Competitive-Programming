#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        if (mat.empty() || mat[0].empty()) {
            return {};
        }
        
        vector<int> result;
        int row = 0, col = 0, d = 0;
        vector<vector<int>> dirs = {{-1, 1}, {1, -1}};
        
        for (int i = 0; i < mat.size() * mat[0].size(); ++i) {
            result.emplace_back(mat[row][col]);
            row += dirs[d][0];
            col += dirs[d][1];

            if (row >= static_cast<int>(mat.size())) {
                row = mat.size() - 1;
                col += 2;
                d = 1 - d;
            } else if (col >= static_cast<int>(mat[0].size())) {
                col = mat[0].size() - 1;
                row += 2;
                d = 1 - d;
            } else if (row < 0)  {
                row = 0;
                d = 1 - d;
            } else if (col < 0)  {
                col = 0;
                d = 1 - d;
            }
        }
        
        return result;
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

    /*  1 2 3
        4 5 6
        7 8 9   */

    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> b  = s.findDiagonalOrder(a);

    for (int i = 0; i < b.size(); i++){
        cout<< b[i] << ", " ;
    }
    


   return 0;
}