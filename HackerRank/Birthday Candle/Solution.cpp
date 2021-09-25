#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {

    sort(candles.begin(), candles.end());

    int longestCandle  = candles[candles.size() -1];
    int numOfCandles = 1;
   
    int i =  candles.size() - 1;
    while (candles[i] == candles[i-1]){

        numOfCandles ++;
        i--; 
    }
    

    cout<<  longestCandle << " " <<  numOfCandles;
    return numOfCandles;
}

int main(){

    vector<int>  a= {2, 3, 4 ,5, 6, 6, 4};
    birthdayCakeCandles(a);


   return 0;
}