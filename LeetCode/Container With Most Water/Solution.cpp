#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
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

int main(){

    // vector<int> m = {1, 2, 1};
    vector<int> m = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout<< s.maxArea(m);


   return 0;
}