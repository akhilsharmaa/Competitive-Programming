#include <iostream>
#include <vector>
using namespace std;

// Brute force 
class Solution {
public:
    vector<int> mergeArr(vector<int>& nums1, vector<int>& nums2, vector<int>& merged){

        int n1 = nums1.size(), n2 = nums2.size(), p1 = 0 , p2 = 0;

        while (p1 < n1 && p2 < n2){
            if(nums1[p1] < nums2[p2]){
                merged.push_back(nums1[p1++]);
            }else if(nums1[p1] == nums2[p2] ){                
                merged.push_back(nums1[p1++]);
                merged.push_back(nums2[p2++]);
            }else {
                merged.push_back(nums2[p2++]);
            }
        }

        while (p1 < n1) merged.push_back(nums1[p1++]);
        while (p2 < n2) merged.push_back(nums2[p2++]);
        return merged;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> merged;
        mergeArr(nums1, nums2, merged);

        int mid = merged.size() / 2;

        for (auto &&i : merged) cout << i << " "; cout<< "\n";
    
        double result;
        if(merged.size() % 2 == 0){
            result = (double)(merged[mid] + merged[mid - 1]) /(double)2;
            return result;
        }else {
            result = (double)merged[mid];
        }

        return result;
    }
};

int main(){

    vector<int> num1 = {1, 2};
    vector<int> num2 = {3, 4};

    Solution s;
    double returns =  s.findMedianSortedArrays(num1 , num2);
    cout<< "Returned value = " << returns << endl ;


    int a = 3 , b = 2;
    double ba = (double)a/(double)b;
    cout << ba;

   return 0;
}