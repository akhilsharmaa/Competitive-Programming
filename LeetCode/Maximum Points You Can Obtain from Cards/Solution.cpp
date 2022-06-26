#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 139 ms, faster than 7.59% of C++ online submissions for Maximum Points You Can Obtain from Cards.
Memory Usage: 42.4 MB, less than 80.56% of C++ online submissions for Maximum Points You Can Obtain from Cards.
*/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size(), sum = 0;

        for(int i= n-k; i< n; i++)sum+= cardPoints[i];

        int mx = sum;
        int l = 0, r = n-k;
        while (r < n){
            sum -= cardPoints[r];
            sum += cardPoints[l];

            mx = max(sum, mx);
            r++, l++;
        }
        
        return mx;
    }
};