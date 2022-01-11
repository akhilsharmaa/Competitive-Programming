#include <bits/stdc++.h>
using namespace std;

// SOLVED AND ACCEPTED :)

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[], int n, int m, int minPages){
    int studentsRequired = 1;
    int sum = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] > minPages)
            return false;

        if (sum + arr[i] > minPages){
            studentsRequired++;
            sum = arr[i];

            if (studentsRequired > m)
                return false;
        }
        else sum += arr[i];
    }
        return true;
    }

    // function to find minimum pages
    int findPages(int arr[], int n, int m){
        if (n < m)  return -1;

        long long sum = 0;
        for (int i = 0; i < n; i++)  sum += arr[i];

        int start = 0, end = sum;
        int result = INT_MAX;

        while (start <= end){
            int mid = (start + end) / 2;
            if (isPossible(arr, n, m, mid)){
                result = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }

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