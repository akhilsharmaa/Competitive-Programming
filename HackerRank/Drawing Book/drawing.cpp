#include <bits/stdc++.h>
using namespace std;

// Your Drawing Book submission got 10.00 points
int solve(int n, int p){
    if(p == 1 || p == n){ return 0;}

    int ans =  1 + (p-2)/2;    
    if(n%2 == 0){
        return min(ans, (int)(1 + (n-p-1)/2));    
    }
    return min((int)(n-p)/2, ans);
}

int main() {
    int n, p;
    cin >> n >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}