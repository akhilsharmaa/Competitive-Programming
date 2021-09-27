
// Sample code to perform I/O:

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num, num2;
	cin >> num;										    // Reading input from STDIN
	cin >> num2;										// Reading input from STDIN
	// cout << "Input number is " << num << ", " << num2<< endl;
    
    int multiples = 0;
    
    for (int i = 1; i < ( min(num,num2) / 2 ) + 1 ; i++){

        if (num % i == 0 && num2 % i == 0  ){
            multiples++;
            // cout<< i << " ";
        }

    }
    
    cout<< multiples ;

    		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
