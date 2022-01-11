#include <bits/stdc++.h>
using namespace std;

// Concept is prooper but not working 

class Solution 
{
    public:
    bool isValid(int A[], int N, int M, int maxPages){  
        int students = 1;
        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum = sum + A[i];
            
            if(sum > maxPages){
                sum = A[i];
                students++;
            }   

            if(students > M){
                return false;
            }
        }

        return true;
    }

    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) {
        
        if( N < M) return -1;

        long long sum = 0;
        for (int i = 0; i < N; i++) sum += A[i]; 
        
        int start = A[N-1], end = sum;
        int result = -1;

        while (start <= end){
            
            int mid = start + end /2;

            if(isValid(A, N, M, mid)){
                result = min(result, mid);
                end = mid - 1 ;
            }else {
                start = mid +1;
            }   
        }

        cout << result;
        return result; 
    }
};

// int main(){
    
//     Solution s;

//     int M = 2;
//     int N = 4;
//     int A[N] = {12,34,67,90};
//     cout << s.findPages(A, N, M);

//     // cout << s.isValid(A, N, M, 10);

//     return 0;
// }