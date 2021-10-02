#include <iostream>
#include <vector>
using namespace std;



int main(){

    int testCases, arrSize, toReturn = 0;
    cin >> testCases ;
    cin >> arrSize ;
    int arr[arrSize];
    vector<int> passedNumber;

    for (int i = 0; i < arrSize; i++){
        int element;
        cin >> element;
        arr[i] = element;        
    }
    
    // Code Starts here;
    for (int i = 0; i < arrSize; i++){

        bool passed = false;
        for (int j = 0; j < passedNumber.size(); j++){
            if (arr[i] == passedNumber[j]){
                passed = true;
            }
        }
        
        if (passed){
            break;
        }
        

        int elementCount = 0;
        for (int j = 0; j < arrSize; j++){
            if (arr[i] == arr[j]){
                elementCount++;
            }            
        }

        cout<< "arr[" << i << "]"<< " = " << arr[i] << 
        " elementCount =" << elementCount << endl ;

        passedNumber.push_back(arr[i]); 

        if (arr[i] != elementCount){ 
            toReturn ++;
        }
        
    }
    

    cout<< toReturn ;
   return toReturn;
}