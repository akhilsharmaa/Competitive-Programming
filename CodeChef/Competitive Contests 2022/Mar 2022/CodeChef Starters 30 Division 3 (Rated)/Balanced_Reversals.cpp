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
    string str;
    cin >> n >> str;

    ll ones = 0, zeroes = 0;
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '0')
            zeroes++;
        else
            ones++;
    }

    string ans = "";
    while (zeroes > 0)
    {
        ans += '0';
        zeroes--;
    }

    while (ones > 0)
    {
        ans += '1';
        ones--;
    }

    cout << ans << endl;
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
