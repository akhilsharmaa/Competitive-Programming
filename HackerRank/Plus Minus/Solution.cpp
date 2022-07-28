#include <iostream>
#include <vector>
using namespace std;

// ACCEPTED :) 
void plusMinus(vector<int> arr) {
    
    double plus = 0;
    double minus = 0 ;
    double zero = 0;

    for (int i = 0; i < arr.size(); i++){

        if(arr[i] > 0) {plus++;}
        else if(arr[i] < 0){ minus ++;}
        else{ zero ++;}
    }

    cout<< plus/ arr.size() << endl ;
    cout<< minus/ arr.size() << endl ;
    cout<< zero/ arr.size() << endl ;

}

int main(){

    vector<int> a = { -4, 3, -9, 0, 4, 1};

    plusMinus(a);


   return 0;
}