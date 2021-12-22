#include <bits/stdc++.h>
using namespace std;


//  SOLVED 
int sockMerchant(int n, vector<int> ar) {

    int total = 0;

    for (int i = 0; i < ar.size(); i++){
        for (int j = 0; j < ar.size(); j++){

            if( i != j && ar[i] == ar[j] && 
                ar[i] != -1 &&  ar[j] != -1){
                ar[i] = -1;
                ar[j] = -1;

                total ++;
            }
        }    
    }
    
    return total;
}

int main(){
    

    
    sockMerchant( 9,{10 ,20, 20, 10 ,10 ,30 ,50 ,10, 20});

    return 0;
}