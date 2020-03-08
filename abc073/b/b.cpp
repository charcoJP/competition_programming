#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int from, to;
    cin >> from >> to;
    ans += to - from + 1;
  }

  cout << ans << endl;
}