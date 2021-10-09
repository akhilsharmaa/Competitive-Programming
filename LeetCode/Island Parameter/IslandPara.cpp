#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

   int count =0 ;
    int islandPerimeter(vector<vector<int>>& grid) {
      
      count = 0; 
      int r = grid.size(), c = grid[0].size();

      for (int i = 0; i < r; i++){
         for (int j = 0; j < c; j++){
            if (grid[i][j] == 1){
               dfs(grid, i, j);
               break;
            }
         }
      }
      cout<< count << endl ;
      return count;
    }

    void dfs(vector<vector<int>>& grid, int i, int j ){
       
       if (i < 0|| i >= grid.size() || j < 0 
       || j >= grid[i].size() || grid[i][j]== 0 ){
          count++;
          return;
       }

       grid[i][j]= -1;
       dfs(grid, i+1, j);
       dfs(grid, i-1, j);
       dfs(grid, i, j + 1);
       dfs(grid, i, j - 1);
    }     

    
};

int main(){


   Solution s;

   vector<vector<int>> a = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
   // vector<vector<int>> a = {{1}};
   s.islandPerimeter(a);


   return 0;
}