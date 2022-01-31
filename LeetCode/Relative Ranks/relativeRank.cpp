#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
using namespace std;

class Solution {
public:
    // ACCEPTED :) 
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<string> result;
        map<int , int> m;

        for (int i = 0; i < score.size(); i++){
            result.push_back(to_string(score[i]));
            m.insert(pair<int, int>(score[i], i));
        }

        // SORTING THE ARRAY
        sort(score.begin(), score.end());

        int j = 1;
        for (int i = score.size() - 1; i >= 0; i--){

            if (i == score.size() - 1){
                result[m.at(score[i])] = "Gold Medal";
            }else if (i == score.size() - 2){
                result[m.at(score[i])] = "Silver Medal";
            }else if (i == score.size()- 3){
                result[m.at(score[i])] = "Bronze Medal";
            }else{
                result[m.at(score[i])] = to_string(j);
            }
           j ++;
        }

        return result;  
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
