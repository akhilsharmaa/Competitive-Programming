#include <bits/stdc++.h>
using namespace std;

/* 
Classical - Recursive
Approach

int fact(int n){
    if(n <= 1)return 1;
    return n * fact(n-1);
}

*/

int multiply(vector<int> &arr, int n, int arrSize){

    int carry = 0;
    int i = 0;

    for (int i = 0; i < arrSize; i++){
        int prod = arr[i] * n + carry;
        arr[i] = prod % 10;
        carry= prod /10;
    }
    
    while (carry){
        arr[arrSize] = carry % 10;
        carry = carry /10;
        arrSize ++;
    }
    
    return arrSize;
}


void fact(int n){

    vector<int> arr;
    arr[0] = 1;
    int res_size = 1;

    multiply(arr, n, res_size);

    for (int i = 2; i <= n; i++){
        res_size = multiply(arr, i, res_size);
    }
    
    // Print Ouput of Arr-Vector 
    for (int i = res_size; i >= 0; i--){
       cout << arr[i] << " " ;
    }
}

int main(){

    int n;
    cin >> n;

    fact(n);

   return 0;
}