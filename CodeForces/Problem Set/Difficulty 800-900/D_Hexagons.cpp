#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i, j, n) for (int i = (j); i < ((int)n); ++i)
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 630D - Hexagons! ACCEPTED :)

void solve()
{

    long long int n, ans;
    cin >> n;
    n++;

    // FORMULA
    ans = (3 * n * (n - 1)) + 1;
    cout << ans << endl;
}

int main()
{

    // For Faster Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
