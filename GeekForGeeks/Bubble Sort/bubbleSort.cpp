#include <iostream>
using namespace std;

// ACCEPTED :) 
//Function to sort the array using bubble sort algorithm.
void bubbleSort(int arr[], int n){
    
    
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n - 1; i++){
 
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
    }

}


int main(){

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(arr, 10);

   return 0;
}