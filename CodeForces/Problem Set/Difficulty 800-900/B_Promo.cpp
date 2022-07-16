/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vt vector
#define pb push_back
#define pNo cout << "NO" << endl;
#define pYes cout << "YES" << endl;
#define loop(i, a, b) for (int i = (a); i <= b; ++i)
#define MOD 100000009
#define all(V) (V).begin(), (V).end()
#define printv(v)      \
    for (auto &&i : v) \
        cout << i << ' ';

void solve()
{

    // Taking INPUT Array
    ll n = 0, q = 0;
    cin >> n >> q;

    vector<long long> p(n), s(n + 1);
    for (auto &x : p) cin >> x;

    sort(p.begin(), p.end());

    for (int i = 0; i < n; ++i)
        s[i + 1] = s[i] + p[i];

    while (q--){
        int x, y;
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] << '\n';
    }
}

int main()
{

    // Faster I/O
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
