 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 
/* Runtime: 40 ms, faster than 19.63% of 
   C++ online submissions for Reverse String.
   Memory Usage: 23.3 MB, less than 42.18% of 
   C++ online submissions for Reverse String.
*/

 class Solution {
    public:

    void swap(int l, int r, vector<char>& s){
        if(l >= r)return;

        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;

        swap(l+ 1, r - 1, s);
    }

    void reverseString(vector<char>& s) {
        swap(0, s.size()-1, s);
    }
};

 int main(){
 
    // Taking INPUT Array
    int n; cin >> n;
    vector<char> arr(n);
    
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    
    Solution s;
    s.reverseString(arr);
 
    // Print Ouput of Arr-Vector 
    for (int i = 0; i < n; i++){
       cout << arr[i] << " " ;
    }

   return 0;
 }