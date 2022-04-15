/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        ll sum = 0;
        for(int i= 0; i < K; i++){
            sum += Arr[i];
        }
        
        int l = 0, r = K;
        ll maxi = sum;
        while(r < N){
            sum -= Arr[l], sum += Arr[r];
            l++, r++;
            maxi = max(sum , maxi);
        } 
        
        return maxi;
    }
};

int main(){

        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;

   return 0;
}

