#include <iostream>
using namespace std;


void staircase(int n) {

   int invNum = n -1;

   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){

         if ( j < invNum){
            cout << " ";
         }else{
            cout << "#";
         }

      }cout<< endl;

      invNum--;
   }
}


int main(){

    staircase(6);


   return 0;
}