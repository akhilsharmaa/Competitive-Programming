#include <bits/stdc++.h>
using namespace std;

#define ll long long int
// aum and B'day

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       unsigned long long b,w,x,y,z;
        std::cin >> b >> w 
            >> x >> y >> z;
        
        if (x+z < y) {
            std::cout << x*b + (x+z)*w << std::endl;
        } else if (y+z < x) {
            std::cout << (y+z)*b + y*w << std::endl;
        } else {
            std::cout << x*b + y*w << std::endl;
        }
   }

   return 0;
}


