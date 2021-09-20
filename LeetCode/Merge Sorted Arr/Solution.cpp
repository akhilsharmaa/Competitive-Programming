#include <iostream>
#include <vector>
using namespace std;


// ACCEPTED :)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m + n;
        while (m > 0 && n > 0) {
            if (nums1[m - 1] > nums2[n - 1]) {
                nums1[i - 1] = nums1[m - 1];
                --m;
            } else {
                nums1[i - 1] = nums2[n - 1];
                --n;
            }
            --i;
        }

        while (n > 0) {
            nums1[i - 1] = nums2[n - 1];
            --n;
            --i;
        }
        
        // Printing --------------------------
        for (auto && k : nums1)
        {
            cout<< k << ", " ;
        }

    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,101,102,103};
    vector<int> nums2 = {2,5,6};

    int m = 3;
    int n = 3;

    s.merge(nums1, m, nums2, n);


   return 0;
}