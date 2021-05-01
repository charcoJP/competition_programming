#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, A, B;
  cin >> X >> A >> B;

  int ans = (X - A) % B;
  cout << ans << endl;

  return 0;
}
