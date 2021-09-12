#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double num1_end = nums1.back();
        double num2_front = nums2.front();
        
        // cout<< "Size of Nums1 = "<< nums1.size() <<endl;
        // cout<< "Size of Nums2 = "<< nums2.size() <<endl;

        double med;
        int mergedSize = nums1.size() +  nums2.size();

        if (mergedSize % 2  == 0 ){ 
            cout<< "Num1 end = "<< num1_end << " | Num2 front = " << num2_front << endl;  
            med = (num1_end + num2_front) / 2;
            cout<< "Med = " << med<< endl ;

        }else{
             
            int medCountIndex = (mergedSize / 2) ;

            cout<< "medCount = " << medCountIndex <<endl ;
            cout<< "nums1[medCount] = " << nums1[medCountIndex] <<endl ;

            if (nums1.size() > medCountIndex){
              cout<< "nums1.size() > mergedSize)" <<endl ;
              med = 1.0 * nums1[medCountIndex];
              return med;
            }
              med = 1.0 * nums2[medCountIndex - nums1.size()];
              return med;

        }
        

        return med;
    }
};

int main(){

    vector<int> num1;
    vector<int> num2;

    num1.push_back(1);
    num1.push_back(3);
    
    num2.push_back(2);

    Solution s;
    double returns =  s.findMedianSortedArrays(num1 , num2);
    cout<< "Returned value = " << returns << endl ;

   return 0;
}