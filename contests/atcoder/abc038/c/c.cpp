#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int a[N];
  for (int i = 0; i < N; i++) cin >> a[i];

  // しゃくとり法
  long long ans = 0;
  int right = 0;
  for (int left = 0; left < N; left++) {
    while (right < N && (right <= left || a[right - 1] < a[right])) {
      right++;
    }
    // right が進めた分を加算する
    ans += right - left;
  }

  cout << ans << endl;
}
