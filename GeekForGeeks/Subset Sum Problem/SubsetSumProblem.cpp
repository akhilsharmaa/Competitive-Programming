#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:

    // Recursive Way 
    // Working :) 

    bool flag = false;
    void helper(int i, int n, int arr[], int sum){

        if(i == n){
            if(sum == 0) flag = true;
            return;
        }

        helper(i +1, n, arr,  sum - arr[i]);
        helper(i +1, n, arr, sum);
    }

    bool isSubsetSum(int N, int arr[], int sum){
        helper(0, N, arr, sum);
        int t[N +1][sum+ 1];

        return flag;
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

    // for (int i = 0; i < 101; i++){
    //     s.t[i] = -1;
    // }
    
    // Taking INPUT Array
    int n = 6, sum = 30; 
    int arr[n] = {3, 34, 4, 12, 5, 2};

    cout << s.isSubsetSum(n, arr, sum);

   return 0;
}