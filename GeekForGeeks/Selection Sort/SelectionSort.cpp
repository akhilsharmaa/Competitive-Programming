#include <iostream>
using namespace std;

// ACCEPTED :) 
class Solution{
    public:
    int select(int arr[], int i){
        return 0;
    }
     
    void selectionSort(int arr[], int n){

        for (int i = 0; i < n; i++){
            int min = INT32_MAX;
            int minIndex = 0;

            for (int j = i; j < n; j++){
                if(min > arr[j]) {
                    min = arr[j];
                    minIndex = j;
                }
            }

            arr[minIndex] = arr[i];
            arr[i] = min;
        }
    }
};

int main(){

   return 0;
}