
/*  Question. There are n cells arrange in the linear order.
    you have a dice with 6-FACES (1, 2, 3, 4, 5, 6),
    
    you are standing 0th cell & want to react (n-1)th cell.
    and each cell you can have 6 possible jumps to make.

    Find & Print the No. of WAYS reach (n-1)th cell? */


#include <bits/stdc++.h>
using namespace std;


void PathsByDice(int n , int i, string osf){
    // Base case
    if (i >= n)return;
    if(i  == n -1) {
        cout << osf << endl;
        return;
    }
    
    for(int j = 1; j <= 6; j++) 
        PathsByDice(n, i +j , osf + to_string(j) + "->");
}

int main(){
    PathsByDice(6, 0, "");
   
   return 0;
}