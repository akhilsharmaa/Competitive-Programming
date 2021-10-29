#include <bits/stdc++.h>
using namespace std;


// ACCEPTED :)  
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        
        int maxLeft[n];
        int maxRight[n];

        maxRight[n-1] = arr[n-1];
        maxLeft[0] = arr[0];

        int pLeft = arr[0], pRight = arr[n-1];

        int j = n -1;
        for (int i = 0; i < n; i++){
            if (i > 0){
                pLeft = max(arr[i], pLeft);
                maxLeft[i] = max(arr[i], pLeft);
            }

            if(j < n){
                pRight = max(arr[j], pRight);
                maxRight[j] = max(arr[j], pRight);
            }

            j--;
        }

        
        long long total = 0;
        
        for (int i = 0; i < n; i++){
            int water = min(maxRight[i], maxLeft[i]) - arr[i];
            total += water;


            // cout << "arr["<< i << "] = " << arr[i] << " | mRight = " << maxRight[i]
            // <<" | maxLeft = " << maxLeft[i] << endl; 
        }

        cout<< total ;
        return total;
    }
};



int main(){

    Solution s;
    int n = 6; 
    // int arr[n] = {8, 8, 2, 4, 5 ,5, 1}; 
    int arr[n] = {3,0,0,2,0,4}; 
    s.trappingWater(arr,n); 

   return 0;
}