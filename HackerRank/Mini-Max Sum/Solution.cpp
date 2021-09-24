#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

// SUBMITED AND ACEPTED :) 
void miniMaxSum(vector<int> arr) {

    // Sorting
    sort(arr.begin(), arr.end());
    long minNum =  0, maxNum =  0; 

    for (int i = 0; i < arr.size(); i++){
        if (i != 4){ minNum += arr[i];}
        if (i != 0){ maxNum += arr[i];}
    }

    cout<< minNum<< " " << maxNum << endl;   

}


int main(){
    
    vector<int> a = {1, 3, 5, 7, 9};
    miniMaxSum(a);
    return 0;
}