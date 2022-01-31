#include <iostream>
#include <map>
using namespace std;

 // ACEPTED :) 
class Solution {
public:
    int romanToInt(string s) {

        map<char, int> con;
        con['I'] =  1;
        con['V'] =  5;
        con['X'] =  10;
        con['L'] =  50;
        con['C'] =  100;
        con['D'] =  500;
        con['M'] =  1000;

        char lastEl = s[s.length() -1] ;  
        int total = con[lastEl];

        cout<< con[2] <<endl;

        for (int i = s.length() -2; i >= 0 ; i--){
            if ( con[s[i]] < con[s[i + 1]] ){
                total -= con[s[i]];
            }else{
                total += con[s[i]];
            }
        }

        // Returning the Interger value of roman 
        return total ;
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

    
    Solution s ;
    s.romanToInt("IV");


   return 0;
}