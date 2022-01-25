#include <bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> &heights, int i, int sum){

    if(i == 0) return 0 ;
    
    
    int left = abs(heights[i] - heights[i-1]) ;
    helper(n, heights, i-1,sum += left);

    int right = INT_MAX;

    if(i > 1){
        right = abs(heights[i] - heights[i-2]);
        helper(n, heights, i-2,sum += right);
    }

    return min(left, right);
}

int frogJump(int n, vector<int> &heights){

    
    return helper(n, heights, n, 0);
}

int main(){

    vector<int> heights = {4, 8, 3, 10, 4, 4 };
    cout<< frogJump(heights.size(), heights);
    
   return 0;
}