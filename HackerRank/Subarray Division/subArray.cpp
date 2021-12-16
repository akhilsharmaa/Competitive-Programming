#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int birthday(vector<int> s, int d, int m) {
    
    int numOfWays = 0;

    int sum = 0;
    for (int i = 0; i < m; i++){
        sum += s[i];
    }

    if(sum == d){
        numOfWays++;
    }

    for (int i = m; i < s.size(); i++){

        sum += s[i];
        sum -= s[i-m];

        if(sum == d)numOfWays++;
    }
    
    cout << numOfWays;
    return numOfWays;
}

int main(){

    vector<int> s = {1, 2, 1, 3, 2};
    int d = 3;
    int m = 2;
    birthday(s, d, m);

    return 0;
}