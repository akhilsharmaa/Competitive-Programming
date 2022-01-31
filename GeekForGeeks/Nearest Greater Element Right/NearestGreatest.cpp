#include <iostream>
#include <stack>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
    public:

    // ACCEPTED :) 
    vector<long long> nextLargerElement(vector<long long> arr, int n){

        vector<long long>v;
        stack<long long>s;
    
       for(int i=n-1;i>=0;i--){
           if(s.empty()){
               v.push_back(-1);
           }
           else if( s.top()>arr[i]){
               v.push_back(s.top());
           }else if(s.size()>0 && s.top()<=arr[i]) {
               while(s.size()>0 && s.top()<=arr[i]){
               s.pop();
               }
           
           if(s.empty()){
               v.push_back(-1);
            }
           else {
               v.push_back(s.top());
            }
           }

           s.push(arr[i]);
       }

       reverse(v.begin(),v.end());
       return v;
    }
};



  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){

    Solution s;
    vector<long long> a = {6, 8, 0, 1, 3};
    vector<long long> r =  s.nextLargerElement(a, 5);

    for (auto &&i : r){
        cout<< i << ", " ;
    }
    

   return 0;
}