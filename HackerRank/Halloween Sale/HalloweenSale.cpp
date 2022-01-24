#include <bits/stdc++.h>
using namespace std;

// You have earned 20.00 points!
int Games(int p_dollar, int d, int m, int s) {
    int res = 0;
    while (p_dollar <= s) {
        res++; s -= p_dollar;
        p_dollar = max(m, p_dollar - d);
    }
    return res;
}

int main() {
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int answer = Games(p, d, m, s);
    cout << answer << "\n";
    return 0;
}