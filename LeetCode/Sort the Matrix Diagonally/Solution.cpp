class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int y = m, ind = 0;
        
        
        while(--y >= 0){
            
            vector<int> v;
            
            int i = 0;
            for (int j = y; j < m && i < n; ++j, i++)
                v.push_back(mat[i][j]);
            
            sort(v.begin(), v.end());
            
            i = 0;
            for (int j = y; j < m && i < n; ++j, i++)
                mat[i][j] = v[ind++];

            ind = 0;
            v.clear();
        }
        
        
        y = 1, ind = 0;
        while(y < n){
                    
            vector<int> v;
                    
            int j = 0;
            for (int i = y; i < n && j < m; ++i, j++){
                v.push_back(mat[i][j]);
            } 

            sort(v.begin(), v.end());
            
            j = 0;
            for (int i = y; i < n && j < m; ++i, ++j)
                mat[i][j] = v[ind++];
             
            ind = 0;
            v.clear();
            
            y++;
        }
        
        return mat;
    }
};