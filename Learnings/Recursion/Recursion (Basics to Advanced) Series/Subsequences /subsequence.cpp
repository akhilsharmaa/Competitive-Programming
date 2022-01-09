#include <bits/stdc++.h>
using namespace std;


// WOrking 
void printSubset(int i, vector<int> &ds, int arr[], int n){

    if(i == n){
        for (auto &&i : ds)
            cout << i << " ";
            cout << "\n";
        
        return;
    }

    printSubset(i +1, ds, arr, n);
    ds.push_back(arr[i]);
    
    printSubset(i +1, ds, arr, n);
    ds.pop_back();
}

int main(){
    
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds = {};
    printSubset(0, ds, arr, n);

}