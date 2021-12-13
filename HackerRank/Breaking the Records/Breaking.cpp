#include <bits/stdc++.h>
using namespace std;


// ACCEPTED :) 
vector<int> breakingRecords(vector<int> scores) {


    int highScore = scores[0];
    int lowScore = scores[0];

    int max_count = 0;
    int min_count = 0;

    for (int i = 0; i < scores.size(); i++){

        if (scores[i] > highScore){
           highScore = scores[i];
           max_count++;
        }
            
        if (scores[i] < lowScore){
           lowScore = scores[i];
           min_count++;
        }
            
    }
    
    cout << max_count << " " << min_count ;

    return {max_count , min_count};
}

int main(){
    

    vector<int> s = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    breakingRecords(s);

    return 0;
}