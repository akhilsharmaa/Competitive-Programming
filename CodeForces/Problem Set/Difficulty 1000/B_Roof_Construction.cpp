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

// 1632B - Roof Construction Accepted :P

void solve()
{

    ll n;
    cin >> n;

    int ht = log2(n - 1);
    int start = 1 << ht;
    for (int i = n - 1; i >= start; i--)
        cout << i << " ";
    for (int i = 0; i < start; i++)
        cout << i << " ";
    cout << endl;
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
