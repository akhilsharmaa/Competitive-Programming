#include <bits/stdc++.h>
using namespace std;

//  You have earned 20.00 points!
int equalizeArray(vector<int> arr) {

    map<int, int> mp;
    map<int,int>::iterator itr;

    for (int i = 0; i < arr.size(); i++){
         
        if (mp.find(arr[i]) != mp.end()) {
            //* key Exists!
            itr = mp.find(arr[i]);
            itr -> second ++;
        }else{
            mp.insert({arr[i], 1}); 
        }
    }

    int max_i = INT_MIN;

    for( itr = mp.begin(); itr != mp.end(); ++itr){
        max_i = max(itr -> second , max_i);    
    }  

    return arr.size() - max_i;
}

int main(){


    vector<int> arr = {3, 3, 2, 1, 3};
    equalizeArray(arr);

   return 0;
}