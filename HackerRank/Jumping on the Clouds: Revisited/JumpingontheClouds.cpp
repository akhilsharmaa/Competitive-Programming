#include <bits/stdc++.h>
using namespace std;

// *Congratulations!

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int e = 100;
    int cur = 0;
    while (true) {
        cur += k;
        cur %= n;
        if (c[cur]) e-= 2;
        e--;
        if (cur == 0) break;
    }
    cout << e << endl;
    return 0;
}