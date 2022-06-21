#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 202 ms, faster than 20.74% of C++ online submissions for Furthest Building You Can Reach.
Memory Usage: 53.8 MB, less than 34.72% of C++ online submissions for Furthest Building You Can Reach.
*/

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
      
         priority_queue <int> pq;
         
         int i = 0;
         for (i; i < heights.size()-1; i++){
            
            int diff =heights[i+1] - heights[i];
            if(diff <= 0)continue;
            
            if(diff <= bricks){
               bricks -= diff;
               pq.push(diff);

            }else if(ladders > 0){
               
               if(pq.size()){
                  int x = pq.top();
                  if(x > diff){
                     bricks+= x;
                     pq.pop();
                     pq.push(diff);
                     bricks -= diff;
                  }  
               }
               ladders--;
            }else break;

         }
         return i;
    }
};


int main(){

   

   return 0;
}