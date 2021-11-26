#include <bits/stdc++.h>
using namespace std;

/* Print the subset of 
    Input  : {1, 4, 5}
    Output : [145], [14], [15], [1], [45], [4], [5], [] 
*/
void printSubset(int *arr, int i, int n, string osf ){
    // base case 
    if (i == n){
        cout<< "[" << osf << "] \n"; 
        return;
    }
 
    printSubset( arr, i + 1 ,n , osf + to_string(arr[i]) + "");
    printSubset( arr, i + 1 ,n , osf);
    
}

int main(){

    int arr[] = {1 , 4, 5};
    printSubset(arr, 0, 3, "");

    return 0;
}