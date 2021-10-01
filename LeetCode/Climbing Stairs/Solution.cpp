#include <iostream>
using namespace std;

//? 0, 1 ,2 ,3, 5, 8, 13, 21
// ACCEPTED :) 
class Solution {
public:
    int climbStairs(int n) {
        
        int p1 = 0, p2 = 1 ,p3;

        for (int i = 0; i < n; i++){
            p3 = p1 + p2 ;
            cout<< p3 << ", " ;
            p1 = p2;
            p2 = p3;
        }
        
        return p3;
    }
};

int main(){

    Solution s;
    s.climbStairs(8);


   return 0;
}