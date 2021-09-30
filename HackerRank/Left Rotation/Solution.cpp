#include <iostream>
#include <vector>
using namespace std;


// ACEPTED :) 
vector<int> rotateLeft(int d, vector<int> arr) {

    vector<int> result;

    for (int i = d ; i < arr.size() ; i++){
        result.push_back(arr[i]);
        // cout<< arr[i] << " ";
    }

    for (int i = 0 ; i < d; i++){
        result.push_back(arr[i]);
        // cout<< arr[i] << " ";
    }
    
    
    return result;
}

int main(){

    vector<int> r = {1, 2, 3, 4, 5};
    vector<int> t = rotateLeft(1, r);

    for (int i = 0; i < t.size(); i++){
        cout<< t[i] << ", ";
    }
    

   return 0;
}