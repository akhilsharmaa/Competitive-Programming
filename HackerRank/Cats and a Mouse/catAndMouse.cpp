#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {

    int X_d = max(z,x) - min(z, x);
    int Y_d = max(z,y) - min(z, y);

    if(X_d < 0)X_d * -1;
    if(Y_d < 0)Y_d * -1;

    if(X_d > Y_d) {
        return "Cat B";
    }
    if(X_d == Y_d)
        return "Mouse C";

    return "Cat A";
}


int main(){
    
    catAndMouse(1, 3, 2);

    return 0;
}