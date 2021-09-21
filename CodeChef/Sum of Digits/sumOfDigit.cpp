#include <iostream>
using namespace std;

// ACCEPTED :)
int main(){

  // Enter Number of Inputs 
	int a; 
	cin >> a;

	  for(int i = 0 ; i < a; i++ ){
        int input; 
        cin >> input;

        int sum = 0;
        while(input > 0){
            int digit = input % 10;
            sum += digit;
            input = input / 10;   
        }

        cout<< sum <<endl;
      }
	


   return 0;
}