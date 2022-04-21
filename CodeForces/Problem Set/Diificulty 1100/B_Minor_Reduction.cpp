/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{

    ll n;
    string str = to_string(n), ans;
    cin >> str;

    string str1 = "";
    ll len = str.length();

    for (int i = len - 1; i >= 0; i--){

        int a = str[i - 1] - '0';
        int b = str[i] - '0';

        if (a + b > 9)
        {
            for (int j = 0; j < i - 1; j++) cout << str[j];
            cout << a + b;
            for (int j = str1.length() - 1; j >= 0; j--)
                 cout << str1[j];
            cout << "\n";
            return;
        }
        else
            str1 += str[i];
    }

    if (len == 2){
        int a = str[0] - '0';
        int b = str[1] - '0';
        cout << a + b << endl;
    }
    else {
        int a = str[0] - '0';
        int b = str[1] - '0';
        cout << a + b 
        << str.substr(2) << endl;
    }


}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
