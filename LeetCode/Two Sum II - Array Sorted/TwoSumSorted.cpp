#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;
        int end = numbers.size() -1;

        while(start <= end){

            if( numbers[start] + numbers[end] == target){
                return {start + 1, end + 1};
            }


            if( numbers[start] + numbers[end] > target){
                end-- ;
            }else{
                start ++;
            }

        }

        return {start + 1, end + 1};
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