#include <iostream>
using namespace std;

// TODO: WAP to check the number is Palindrom ? 
//? Without converting integer to string 
class Solution {
public:
    bool isPalindrome(int x) {
        
        int reverse = 0 , temp = x;
        
        while (temp > 0){ 
            int r = temp % 10;
            reverse  = reverse * 10 + r;

            temp /= 10;
        }

        cout<< "Reverse = " << reverse << "  " <<endl;
        return 0; 
    }
};

int main(){

    Solution s; 
    cout<<"Input  = 2124"<<endl;
    bool isPal =  s.isPalindrome(2124);
    // if (isPal){
    // cout<<"Yes Palindrom";
    // }
    

   return 0;
}