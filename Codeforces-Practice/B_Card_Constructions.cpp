#include<bits/stdc++.h>

using namespace std;

#define int long long

int trinum(int n) {
  return n * (3 * n + 1) / 2;
} 

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  for (int j = 0; j < t; j++) {
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 30000; i > 0; i--) {
      int x = trinum(i);
      while (x <= n) {
        cnt++;
        n-=x;
      }
    }
    cout << cnt << "\n";
  }
}
