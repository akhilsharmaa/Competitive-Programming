#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

// You have earned 20.00 points!

int squares(int a, int b) {    
    
    int count = 0;
    
    for (int i = 1; i * i <= b; i++){

        if(i * i < b && i * i > a){
            count ++;
        }

    }

    return count;
}


int main(){

    int testCase;
    cin >> testCase;
   
    while(testCase--){
       
       
       
    }

   return 0;
}