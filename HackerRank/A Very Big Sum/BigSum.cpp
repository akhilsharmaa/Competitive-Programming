#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Accepted by HackerRank
long aVeryBigSum(vector<long> ar) {

    long sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i];
    }
     

    return sum;
}


int main()
{

    return 0;
}

