#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Passed :) & Accepted by LeetCode
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;

        while(left != right){
            int distance = right - left;

            if (height[left] < height[right] ){

                water = max(height[left] * distance , water);

                left++;
            }else{
                water = max(height[right] * distance , water);
                right--;
            }
            cout<< water << ", ";
        }

        return water;          
    }

    // In This i havn't Used Maths Library of Cpp.
    int maxArea2(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;

        while(left != right){
            int distance = right - left;

            if (height[left] < height[right] ){

                if (height[left] * distance > water){
                    water = height[left] * distance;
                }

                left++;
            }else{
                if (height[right] * distance > water){
                    water = height[right] * distance;
                }

                right--;
            }
            // cout<< water << ", ";
        }

        return water;          
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

    // vector<int> m = {1, 2, 1};
    vector<int> m = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout<< s.maxArea(m);


   return 0;
}