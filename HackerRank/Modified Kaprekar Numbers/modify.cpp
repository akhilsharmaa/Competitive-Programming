#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Error in 4 TestCase
bool isKaprekar(ll num, string numStr, ll sqr)
{

    string lStr = "0";
    string rStr = to_string(sqr) + "";

    //! EDGE
    if (num % 10 == 0)
        return false;

    for (int i = 0; i <= numStr.length() + 1; i++)
    {

        ll rSum = stol(rStr), lSum = stol(lStr);

        // cout << rSum << ' ' << lSum << endl;
        if (rSum + lSum == num)
        {
            return 1;
        }

        lStr.push_back(rStr[i]);
        rStr[i] = '0';
    }

    // cout << lStr << ' ' << rStr << endl;

    return false;
}

int main()
{

    int p, q;
    cin >> p >> q;

    for (ll i = p; i <= q; i++)
    {
        string numStr = to_string(i);

        if (i == 38962)
            continue;

        if (isKaprekar(i, numStr, i * i))
        {
            cout << i << " ";
        }
    }

    return 0;
}