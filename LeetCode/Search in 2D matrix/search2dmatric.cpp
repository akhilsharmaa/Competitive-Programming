#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ACCEPTED :) 
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] > target)
                j--;
            else 
                i++;
        }
        
        return false;

    }
};

int main(){
    Solution s;
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<< s.searchMatrix(v, 16);

   return 0;
}