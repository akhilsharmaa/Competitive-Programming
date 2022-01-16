#include <bits/stdc++.h>
using namespace std;

// ACCEPTED & ALL TEST CASE PASSED :D

int main(){
    int n,k,res = 0;
    cin >> n >> k;
    vector<int> height(n);

    for(int height_i = 0; height_i < n; height_i++){
        
        cin >> height[height_i];
        
        if (height[height_i] > k){
            res += -k + height[height_i]; k = height[height_i]; 
        }
    }
    
    printf("%d\n", res);
    return 0;
}