#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<int> A(N), B(N), C(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];
  for (int i = 0; i < N; i++) cin >> C[i];

  // 昇順
  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  ll ans = 0;

  for (int i = 0; i < N; i++) {
    // lower_bound は指定した値以上の要素の一番左のイテレータを返す
    ll a = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
    // upper_bound は指定した値より大きいの要素の一番左のイテレータを返す
    ll c = upper_bound(C.begin(), C.end(), B[i]) - C.begin();
    ans += a * (N - c);
  }

  cout << ans << endl;
}