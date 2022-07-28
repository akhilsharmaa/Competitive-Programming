#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Problem Solved Successfully 
 Test Cases Passed: 270 / 270
 Total Points Scored: 4/4
 Total Time Taken: 0.07/1.07
 Your Accuracy: 100% 
*/

class Solution
{   
    public: 
    //Function to return a list of integers denoting 
    // spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        
        vector<int> arr;
        int top = 0, bottom = r-1;
        int right = c-1, left = 0;
        int direct = 0;

        while (left <= right && top <= bottom){  

                if(direct == 0){// left to right

                    for (int i = left; i <= right; i++){
                        arr.push_back(matrix[top][i]);
                    }
                    
                    direct++ , top++;
                }else if(direct == 1){ // top to bottom

                    for (int i = top; i <= bottom; i++){
                        arr.push_back(matrix[i][right]);
                    }
                    
                    direct++ , right--;
                }
                else if(direct == 2){// right to left
                    
                    for (int i = right; i >= left; i--){
                        arr.push_back(matrix[bottom][i]);
                    }
                    
                    direct++ , bottom--;
                }
                else if(direct == 3){ // bottom to top
                    for (int i = bottom; i >= top; i--){
                        arr.push_back(matrix[i][left]);
                    }

                    direct= 0, left++;
                }
        }
        return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++){
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
                cin>>matrix[i][j];
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
        cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
