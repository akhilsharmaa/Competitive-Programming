#include <stack>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// ACCEPTED:) 

int N, h[100005];
int p = 1, s[100005];
int main() {
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) scanf("%d", &h[i]);
    int ans = 0;
    for (int i = 0; i < N + 2; ++i) {
        while (h[i] < h[s[p - 1]]) {
            int y = h[s[p - 1]];
            p--;
            ans = max(ans, (i - s[p - 1] - 1) * y);
        }
        s[p++] = i;
    }
    printf("%d\n", ans);
    return 0;
}
