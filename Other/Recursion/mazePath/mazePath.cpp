#include <bits/stdc++.h>
using namespace std;

/* Similar problem of 
Leetcode : https://leetcode.com/problems/unique-paths/ 

find all paths to go to the end of (n x m) matrix.   
 */

// 

int totalPaths = 0;
void mazePath(int i, int j, int n, int m, string osf){
    
    // BASE CASE 
    if (i == n -1 && j == m-1){
        // We Found The Destination 
        totalPaths++;
        cout<< osf << "\n";
        return;
    }  
    // BASE CASE
    if(i >= n || j >= m){
        return;
    }

    mazePath(i , j+1, n, m, osf + "R"); // MOVE RIGHT 
    mazePath(i+1, j, n, m, osf + "D"); // MOVE DOWN
}

int main(){
   
   mazePath(0, 0, 3, 3, "");

   return 0;
}