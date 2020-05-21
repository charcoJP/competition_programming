#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  double shortHand = (n % 12) * 30 + (m * 0.5);
  double longHand = m * 6;

  // 差を求める
  double ans = min(abs(shortHand - longHand), 360 - abs(shortHand - longHand));
  cout << ans << endl;
}