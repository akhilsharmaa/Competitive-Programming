#include <iostream>
using namespace std;

class Solution{
    public:

    // Problem Solved Successfully
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        
        int temp[d];
        for(int i = 0; i < d; i++){
            temp[i] = arr[i];
        }
    
        int k = d;
        for(int i = 0; k <= n; i++){
            arr[i] = arr[k];
            k++;
        }
        
        int l = 0;
        for(int i = (n - d); i < n; i++){
            arr[i] = temp[l];
            l++;
        }
    }
};

int main(){

   Solution s;
   int n = 10;
   int arr[n] = {2,4,6,8,10,12,14,16,18,20};
   s.rotateArr(arr, 3, n);

   return 0;
}