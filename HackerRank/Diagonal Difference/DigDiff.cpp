#include <iostream>
#include <vector>
using namespace std;

// Passed in All Case in HacerRank :) 
int diagonalDifference(vector<vector<int>> arr) {

    int  leftToRight = 0;
    int  rightToLeft = 0;

    int reverse = arr[0].size() - 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";

            if (i == j){
                leftToRight += arr[i][j];
            }            
        } cout<< endl ;

        rightToLeft += arr[i][reverse];
        reverse--;
    }

    // cout<<"arr[1][2]  = "<< arr[1][2] <<endl;
    // cout<<"Left To Right = "<< leftToRight <<endl;
    // cout<<"Right to Left = "<< rightToLeft <<endl ;
    
    int diff = (leftToRight - rightToLeft);

    if(diff < 0 )
    {
        diff *= -1;
    }
    

    return diff;
}


int main(){

    vector<vector<int>> arr = {
        {1, 2, 3} ,
        {4, 5, 6} , 
        {9, 8, 9} };

    cout<<diagonalDifference(arr);


   return 0;
}