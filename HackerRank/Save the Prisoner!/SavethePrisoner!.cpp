#include <bits/stdc++.h>
using namespace std;

// FuLLY ACCEPTED & :)

int main() {
    int t; cin >> t;
    
    while(t--) {
        int n,m,s; cin >> n >> m >> s;
        --s; --m;
        s += m;
        s %= n;
        s++;
        cout << s << endl;
    }
    return 0;
}