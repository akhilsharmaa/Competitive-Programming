#include <iostream>
#include <vector>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums[0] == target)return 0;

        int left = 0, right = nums.size() - 1; 
        // Otimized way of finding MID
        int mid = left + (right - left) / 2;

        while (left < right){
            if (nums[left] == target){ 
                return left;
            }else if(nums[right] == target){ 
                return right;
            }else if (nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                left = mid + 1;
            }else if(nums[mid] > target){
                right = mid - 1;
            }

            //? Finding the mid of left and right 
            mid = left + (right - left) / 2;
        }

        return -1;
    }
};

int main(){

    Solution s;

    vector<int> a = {5};
    cout<< s.search(a, 5);

   return 0;
}



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