#include <bits/stdc++.h>
using namespace std;

// Passed All Testcases
int main(){
    
    int num;
    cin >> num;

    if(num % 2 == 0){
        if(num >= 2 && num <= 5 || num > 20){
            cout << "Not Weird";
        }else if(num >= 6 && num <= 20){
            cout << "Weird";
        }
    }else {
            cout << "Weird";
    }

   return 0;
}