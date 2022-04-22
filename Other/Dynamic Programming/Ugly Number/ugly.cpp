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
    cin >> n;
}

int main()
{

    int arr[120];
    arr[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;

    int nextMulOf_2 =  2;
    int nextMulOf_3 =  3;
    int nextMulOf_5 =  5;

    for (int i = 1; i < 120; i++){

        unsigned next_uglyNum = min(nextMulOf_2,
                     min(nextMulOf_3,
                         nextMulOf_5));

        arr[i] = next_uglyNum;

        if (next_uglyNum == nextMulOf_2)
            nextMulOf_2 = (arr[++i2] * 2);
        
        if (next_uglyNum == nextMulOf_3)
            nextMulOf_3 = (arr[++i3] * 3);
        
        if (next_uglyNum == nextMulOf_5)
            nextMulOf_5 = (arr[++i5] * 5);
    }

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << arr[n-1] << endl;
    }

    // // Print Ouput of Arr-Vector 
    // for (int i = 0; i < 120; i++){
    //    cout << arr[i] << " " ;
    // }

    return 0;
}
