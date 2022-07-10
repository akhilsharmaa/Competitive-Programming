#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {

        sort(buses.begin(), buses.end());

        unordered_set<int> st;
        
        int n = buses.size();
        int k = passengers.size();

        for (int i = 0; i < k; i++){
            st.insert(passengers[i]);
        }

        int i = buses[n-1];
        while (st.find(i) != st.end()){
            i--;
        }

        
        return i;
    }
};

int main(){


   return 0;
}