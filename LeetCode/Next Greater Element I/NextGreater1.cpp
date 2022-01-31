#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> S; // Intializing Stack 
        vector<int> nums2_result; 
        
        //? TIME COMPLEXITY = O(N)
        for (int i = nums2.size() - 1; i >= 0; i--){
            if (S.empty()){
                nums2_result.push_back(-1);
            }
            else if(nums2[i] > S.top() ){
                while (nums2[i] > S.top()){
                    S.pop();
                    if (S.empty()) break; // Break Loop 
                }
                if (S.empty()) nums2_result.push_back(-1);
                else nums2_result.push_back(S.top()); 
            }else{
                nums2_result.push_back(S.top());
            }
            S.push(nums2[i]);
        }


        // Reverse the Array 
        reverse(nums2_result.begin(), nums2_result.end());

        return nums2_result;
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

    Solution s;

    vector<int> num1 = {4,1,2};
    vector<int> num2 = {1,3,4,2};
    vector<int> re =  s.nextGreaterElement(num1, num2);


    // Printing OUTPUT 
    cout<< "INPUT :  1,3, 4, 2  " <<endl ;
    cout<< "Expect:  3,4,-1,-1  " <<endl << "Output:  " ;
    for (auto &&i : re){
            cout<< i << "," ;   
    }cout<< endl ;
    

   return 0;
}