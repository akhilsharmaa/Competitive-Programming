#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n){   
        
        int sum = 0;
        // Print Ouput of Arr-Vector 
        for (int i = 0; i < n; i++){
           sum += A[i];
        }

        int l =0, r= n-1, length = n+1;
        while (l <= r){
            if(sum == 0)return length;

            if(sum > 0 && A[l+1] > 0){
                sum += A[++l];
                length--;
            }else if(sum < 0 && A[l+1] > 0){
                sum += A[++l];
            }else if(sum > 0 && A[r-1] < 0){
                sum += A[--r];
            }else if(sum < 0 && A[r-1] > 0){
                sum += A[--r];
            }else {
                r--;
                l++;
            }

        }
        
        return length;
    }
};


int main(){

   

   return 0;
}