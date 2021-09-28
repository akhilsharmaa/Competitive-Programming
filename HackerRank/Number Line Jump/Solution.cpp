#include <iostream>
using namespace std;


// ACCEPTED :) 
string kangaroo(int x1, int v1, int x2, int v2) {

    bool is = false;
    while (x1 <= x2){

        if (x1 == x2){
            return "YES";
        }
              
        
        x1 += v1;
        x2 += v2;
    }
    

    return "NO";
}


int main(){

   cout<< kangaroo(0,3, 4, 2);
   return 0;
}