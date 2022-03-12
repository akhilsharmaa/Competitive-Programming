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

    ll n;
    cin >> n;

    ll cnt = 0;
    if (n > 6)
    {
        cnt = n / 7;
    }

    ll rem = n % 7;
    if(rem >= 6){
        cnt++;
    }

    cout << cnt  << endl;
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
