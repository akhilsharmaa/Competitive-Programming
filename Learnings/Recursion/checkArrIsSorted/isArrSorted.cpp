#include <bits/stdc++.h>
using namespace std;

void isArrSorted( int *arr , int i, int n){

    // BASE CASE
    if(i == n){
        cout<< "YES, sorted";
        return;
    }

    if (arr[i] <= arr[i + 1]){
        isArrSorted(arr, i + 1, n);
    }else {
        cout<< "NO, not sorted";
        return;
    }
}

int main(){
   
   int arr[] = {2, 3, 4, 11 , 12, 12, 56};
   isArrSorted(arr, 0, 7);

   return 0;
}