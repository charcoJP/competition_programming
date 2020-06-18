#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    ans += min(2 * x, 2 * (K - x));
  }

  cout << ans << endl;
}