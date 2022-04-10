/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll x, y;
    cin >> x >> y;

    if(y % x != 0){
        cout << y / x << endl;
    }else {
        cout << y / x -1 << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
