#include <bits/stdc++.h>
using namespace std;

// Problem Solved Successfully 
class Solution
{
    public:
    
    int t[102][1002];

    //Function to return max value that can be put in knapsack of capacity W.
    int knapSackHelper(int W, int wt[], int val[], int n) {

        if(n == 0|| W == 0){
            return 0;
        }

        if(t[n][W] != -1){
            return t[n][W];
        } 

        if(wt[n-1] <= W){
            return t[n][W] = max(val[n-1]+ knapSackHelper(W - wt[n-1], wt, val, n-1), 
                    knapSackHelper(W, wt, val, n-1));
        }else
            return t[n][W] = knapSackHelper(W, wt, val, n-1);
    }

    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) {
        
        memset(t, -1, sizeof(t));
        return knapSackHelper(W, wt, val, n);
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
    s.knapSack(1, {}, {}, 0);

    return 0;
}