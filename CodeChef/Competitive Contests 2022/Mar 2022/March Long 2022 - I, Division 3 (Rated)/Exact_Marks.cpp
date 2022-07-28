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

// SOlVED :) 

void solve()
{

    ll n, targetM;
    cin >> n >> targetM;

    ll s=0, w=0, m=0;

    if(targetM % 3 == 0){
        s += targetM / 3;
    }else if(targetM % 3 == 1){
        s += (targetM / 3)+ 1;
        w += 2;
    }else if(targetM % 3 == 2){
        s += (targetM / 3)+ 1;
        w += 1;
    }

    if(s + w <= n){
        m = (n - s - w);
        pYes
        cout << s << " " << w << " " << m << endl;
    }else pNo


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
