#include <bits/stdc++.h>
using namespace std;

// Not Accepted :( 
class Solution{

    void helper(vector<int>& arr, int i, vector<int>& temp, vector<vector<int>> &result){

        if(i == arr.size()){
            result.push_back(temp);
            return;
        }
        
        helper(arr, i+1, temp, result);
        temp.push_back(arr[i]);

        helper(arr, i+1, temp, result);
        temp.pop_back();
    }

    public:
    vector<vector<int> > subsets(vector<int>& A){
         vector<vector<int>> result;
            vector<int> temp;
         helper(A, 0, temp, result);

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

    vector<int> arr = {2, 3, 1};
    vector<vector<int> > v = s.subsets(arr);

    for (auto && i : v) {
        for (auto && j : i){
            cout << j <<  ' ';
        }cout << "\n";
    }
    

    return 0;
}