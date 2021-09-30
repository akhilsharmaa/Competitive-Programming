#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//?      0 0 0 0 0 0
//?      0 0 0 0 0 0
//?      1 1 0 1 0 1 
//?      1 1 0 1 0 1 
//?      1 1 0 1 0 1 
//?      1 1 0 1 0 1 

// ACCEPTED :) 
int hourglassSum(vector<vector<int>> arr) {

    // Max Value To Be Return 
    int max_value ; 

    for (int i = 0; i <= 3 ; ++i){
        for (int j = 0; j <= 3 ; ++j){
            
            int current_max_value = arr[i][j]   + arr[i][j+1]   + arr[i][j+2] 
                        +   arr[i+1][j + 1] + arr[i+2][j] + arr[i+2][j+1] 
                        +   arr[i+2][j+2]; 

            max_value = std::max(current_max_value, max_value);
        }
    }

    return max_value;
}


int main(){

    vector<vector<int>> a = {{-9, -9, -9,  1, 1, 1}, 
                            { 0, -9,  0,  4, 3, 2},
                            {-9, -9, -9,  1, 2, 3},
                            { 0,  0,  8,  6, 6, 0},
                            { 0,  0,  0, -2, 0, 0},
                            { 0,  0,  1,  2, 4, 0}};

    cout<< hourglassSum(a);

   return 0;
}