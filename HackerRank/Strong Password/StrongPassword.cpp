#include <bits/stdc++.h>
using namespace std;

// Problem Solving
// You have earned 15.00 points!

int main() {

    int n, a , b, c, d;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        
        if (s[i] >= '0' && s[i] <= '9') 
            a = 1;
        else if (s[i] >= 'a' && s[i] <= 'z') 
            b = 1;
        else if (s[i] >= 'A' && s[i] <= 'Z') 
            c = 1;
        else d = 1;

    }
    
    cout << max(6 - n, 4 - a - b - c - d);
    return 0;
}
