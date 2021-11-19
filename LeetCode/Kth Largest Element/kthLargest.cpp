#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // Min-Heap
        priority_queue <int, vector<int>, greater<int> > minHeap;

        for (int i = 0; i < nums.size(); i++){
            if (minHeap.size() < k){
                minHeap.push(nums[i]);
            }else {
                if (minHeap.top() < nums[i] ){
                    minHeap.pop();
                    minHeap.push(nums[i]);
                }
            }
        }

        return minHeap.top();
    }
};

int main(){
   Solution s;

   vector<int> nums = {3,2,3,1,2,4,5,5,6};
   cout << "Return: "<< s.findKthLargest(nums, 4) << endl;

   return 0;
}