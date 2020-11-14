#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  int ans = 1;

  for (int b = 2; b <= X; b++) {
    int x = b * b;
    while (x <= X) {
      ans = max(ans, x);
      x *= b;
    }
  }
  cout << ans << endl;
}
