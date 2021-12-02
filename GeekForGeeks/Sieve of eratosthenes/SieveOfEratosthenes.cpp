#include <bits/stdc++.h>
using namespace std;
// ACCEPTED :) 
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N){
        
        vector<int> result; 
        vector<bool> p( N+1 , true);

        for (long long i = 2; i * i < N; i++){
            if (p[i] == true){
                for (long long j = i * 2; j <= N; j = j + i){
                    p[j] = false;
                }
            }
        }
        
        for (long long i = 2; i <= N; i++){
            if(p[i] == true){
                result.push_back(i);
            }
        }

        return result;
    }
};

int main(){

    Solution s;
    vector<int> result = s.sieveOfEratosthenes(7507);
    
    for (auto && i : result){
        cout << i << " ";
    }
    

   return 0;
}