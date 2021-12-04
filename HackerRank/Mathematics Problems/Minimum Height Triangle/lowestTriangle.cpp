#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int lowestTriangle(int trianglebase, int area) {
    long h=(area*2) / trianglebase;
    if((area*2)%trianglebase==0) return h;
    return ++h;
}

int main(){
    
   cout<<  lowestTriangle(17 , 100);

   return 0;
}