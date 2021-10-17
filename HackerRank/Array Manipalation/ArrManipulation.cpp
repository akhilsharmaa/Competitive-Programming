#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


long getMax(vector<long> arr){

    long max = LONG_MIN, sum = 0;
    for (int i = 0; i <= arr.size(); i++){
        sum += arr[i];
        max =  std::max(max, sum);
    }

    return max;
}  

long arrayManipulation(int n, vector<vector<int>> queries) {

    // OPtimized SOLUTION 
    vector<long> arr(n+2, 0);

    for (int i = 0; i < queries.size() ; i++){
        int a =  queries[i][0];
        int b =  queries[i][1];
        int k =  queries[i][2];

        arr[a] += k;
        arr[b] -= k;
    }

    long max = getMax(arr);


    //? This is a BRUT FORCE Approch 
    // int tempArr[n] = {0};
    // long result = LONG_MIN; 
    //
    // for (int c = 0; c < queries.size(); c++){
    //
    //     long a =  queries[c][0];
    //     long b =  queries[c][1];
    //     long k =  queries[c][2];
    //
    //     for (long i = a - 1 ; i < b; i++){
    //         tempArr[i] += k;
    //     }
    // 
    //     if (c == queries.size() - 1){
    //         for (long i = 0; i < n; i++){
    //             if (result < tempArr[i]){
    //                 result = tempArr[i];
    //             }
    //         }
    //     } 
    //
    // }
    cout<< max ;
    return max;
}
 

int main(){

    // cout<< "Heelo" ;
    int n = 10;
    vector<vector<int>> queries =  {{2, 6, 8},
                                    {3, 5, 7},
                                    {1, 8, 1},
                                    {5, 9, 15}};

    arrayManipulation(n, queries);

   return 0;
}