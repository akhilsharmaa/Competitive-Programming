#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int migratoryBirds(vector<int> arr) {
    
    int freq[5] = {0};

    for (int i = 0; i < arr.size(); i++){
        freq[arr[i] - 1]++;
    }

    int maxNum = -1 ;
    int maxIndex; 

    for (int i = 0; i < 5; i++){
        if(freq[i] > maxNum){
            maxIndex = i;
            maxNum = freq[i];
        }
    }

    cout << maxIndex + 1;
    return maxIndex + 1;
}

int main(){
    
    migratoryBirds({1, 2, 3 ,4, 5 ,4 ,3 ,2, 1 ,3, 4});

    return 0;
}