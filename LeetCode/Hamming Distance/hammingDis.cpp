#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int n = x ^ y;  
        
        while (n){
            if (n&1) {
                count++;
            }
            n = n >> 1;
        }

        return count;
    }
};

int main(){

    Solution s;
    cout<< s.hammingDistance(1, 4);

    return 0;
}