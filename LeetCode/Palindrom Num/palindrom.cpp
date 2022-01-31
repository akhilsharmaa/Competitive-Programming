#include <iostream>
using namespace std;

// TODO: WAP to check the number is Palindrom ? 
//? Without converting integer to string 
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 || x >= 2147483647)
        {
            return false;
        }
        
        
        long int reverse = 0, temp = x;
        
        while (temp > 0){ 
            int r = temp % 10;
            reverse  = (reverse * 10 )+ r;

            temp /= 10;
        }

        // cout<< "Reverse = " << reverse << "  " <<endl;
        return reverse == x; 
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
    // cout<<"Input  = 2124"<<endl;
    bool isPal =  s.isPalindrome(303);
    if (isPal){
        cout<<"Yes Palindrom";
    }else{
        cout<<"No Palindrom";
    }
    

   return 0;
}