/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{

    ll n, ans = 0, two = 0, ones = 0, seen_ones = 0;
    // Taking INPUT Array
    cin >> n;
    vector<int> arr;

    while (n--)
    {
        ll input;
        cin >> input;
        arr.push_back(input);

        if (input == 2)
            two++;
        if (input == 1)
            seen_ones++;
    }

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == 1)
        {
            ans += arr.size() - (i + 1);
            seen_ones--;
        }
        else
        {
            ans += seen_ones;
        }
    }
    two--;

    cout << ans + (two * (two + 1) / 2) << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
