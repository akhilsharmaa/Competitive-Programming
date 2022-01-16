#include <bits/stdc++.h>
using namespace std;

// ACCEPTED & ALL TEST CASE PASSED :D

string angryProfessor(int k, vector<int> a) {
        
    int onTime = 0, late =0;    
    for(int i = 0; i < a.size(); i++){
        if(a[i] <= 0){
            onTime++;
        }
    }
    
    if(onTime >= k){
        return "NO";
    }else {
        return "YES";
    }
}


int main(){
    

    return 0;
}