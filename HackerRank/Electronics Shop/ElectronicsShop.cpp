#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
   
    int maximum = INT8_MIN;
    
    for(int i = 0; i < keyboards.size(); i++){

        for(int j = 0; j < drives.size(); j++){ 
            int sum = keyboards[i] + drives[j];

            if(sum > maximum && sum <= b){
                maximum = sum;
            }
        }  
    }
    
    if(maximum < 0) return -1;
    return maximum;
}


int main(){

    return 0;
}