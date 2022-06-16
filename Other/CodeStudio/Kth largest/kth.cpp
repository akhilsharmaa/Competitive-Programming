#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {

    sort(arr, arr+n);   
    int kthLargest = -1, kthSmall = -1;

    int l = 0;
    for (int i = 0; i < n; i++){

        if(arr[i] == arr[i+1]){
            while (arr[i] == arr[i+1])
            i++;
        }   

        if(l == k-1){
            kthLargest = arr[i];
            break;
        }

        l++;
        // cout << arr[i] << " ";
    }
    


      cout <<kthLargest  << " " << kthSmall << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}