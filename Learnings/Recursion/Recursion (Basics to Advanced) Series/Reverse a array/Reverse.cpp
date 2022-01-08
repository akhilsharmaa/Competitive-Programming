#include <bits/stdc++.h>
using namespace std;

// Working :) 
void helper(int arr[], int left, int right){
    
    // Base case
    if(left >= right) return;

    swap(arr[left], arr[right]);
    helper(arr, left+ 1, right -1);
}

void reverse(int arr[], int n){
    helper(arr, 0, n-1);
}

int main(){
    
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(arr ,n);

    // Print Ouput of Arr-Vector 
    for (auto && i : arr){
        cout << i << " " ;
    }

    return 0;
}