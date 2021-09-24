#include <iostream>
#include <vector>
using namespace std;

// ACEPTED :) 
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> result;
    result.push_back(0);
    result.push_back(0);

    for (int i = 0; i <= 2; i++){
        //? Comparing 0th Element 
        if (a[i] > b[i]) {result[0]+= 1;}
        else if (a[i] < b[i]){ result[1]+= 1;}
        else{ }
    }
    

    return result;
}


int main(){

    vector<int> a = {1, 3, 4};
    vector<int> b = {2, 3, 1};

    vector<int> result =  compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    


   return 0;
}