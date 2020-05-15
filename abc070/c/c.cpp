#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  if (a % b == 0) return b;

  return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
  // a * b / gcd(a, b) だとオーバーフローするので先に割って値を小さくしておく
  return a / gcd(a, b) * b;
}

int main() {
  int N;
  cin >> N;

  // ユークリッドの互除法でgcdを求めるために0ではなく、1で初期化
  ll ans = 1;

  for (int i = 0; i < N; i++) {
    ll t;
    cin >> t;

    ans = lcm(ans, t);
  }

  cout << ans << endl;
}
