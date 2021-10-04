#include <iostream>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int mySqrt(int x) {
        
        long long y = 0; 
        while (y * y <= x){

            y++;
        }   

        return y-1;
    }
};

int main(){

    Solution s;
    s.mySqrt(64);


   return 0;
}