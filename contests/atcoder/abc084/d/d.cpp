#include <bits/stdc++.h>
using namespace std;

// TODO: 229ms. C++ の最速は 4ms, 1ページ目の最遅が8msであるため要リファクタリング
int main() {
  int MAX = 100000;
  vector<int> is_prime_list(MAX, 1);
  is_prime_list[0] = 0, is_prime_list[1] = 0;

  // エラトステネスのふるい
  for (int i = 2; i < MAX; i++) {
    if (!is_prime_list[i]) continue;
    for (int j = i * 2; j < MAX; j += i) is_prime_list[j] = 0;
  }

  // 2017に似た数のリストを作る
  vector<int> a(MAX, 0);
  for (int i = 0; i < MAX; i++) {
    if (i % 2 == 0) continue;
    if (is_prime_list[i] && is_prime_list[(i + 2) / 2]) a[i] = 1;
  }

  // 累積和
  vector<int> s(MAX + 1, 0);
  for (int i = 0; i < MAX; i++) s[i + 1] = s[i] + a[i];

  // 区間にある2017に似た数を出す
  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;

    // 終点(r)の値も含めるために + 1が必要
    int ans = s[r + 1] - s[l];
    cout << ans << endl;
  }
}