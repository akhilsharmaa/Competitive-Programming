/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{

    ll n, k;
    cin >> n >> k;
    ll hours = 0, done = 1;

    while (done < n)
    {

        if (done < k)
        {
            done += done;
            hours++;
        }
        else{

            ll toInstall = n - (done);
            ll div = toInstall / k;

            if (toInstall % k == 0)
                hours += (toInstall / k);
            else
            {
                hours += (toInstall / k);
                hours++;
            }
            break;
        }
    }

    cout << hours << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
