#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    int data[n];
    for(int i=0; i<n; i++) cin >> data[i];
    
    k = k % n;
    while(q--) {
        int x;
        cin >> x;
        x = x - k;
        if(x < 0) x = x + n;
        cout<< data[x]<< "\n";
    }
    return 0;
}

