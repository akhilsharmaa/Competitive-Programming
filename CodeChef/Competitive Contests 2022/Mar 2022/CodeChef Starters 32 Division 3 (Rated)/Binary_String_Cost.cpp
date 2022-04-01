/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i, j, n) for (int i = (j); i < ((int)n); ++i)
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

void solve()
{

    ll n, x, y;
    string s;
    cin >> n >> x >> y;
    cin >> s;

    ll cost = 0;
    bool ones = false, zero = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1'){
            ones = true;
        }else {
            zero = true;
        }
    }

    if(ones && zero){
        cost = min(x, y);
    }
    cout << cost << endl;
}

int main()
{

    // For Faster Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tCase;
    cin >> tCase;

    while (tCase--)
    {
        solve();
    }

    return 0;
}
