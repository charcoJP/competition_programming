#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// see: https://drken1215.hatenablog.com/entry/2020/06/21/224900
// 差分更新, バケット
int main() {
  int N;
  cin >> N;

  vector<int> counts(1000000, 0);

  ll sum = 0;

  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    // 数をメモっとく
    counts[tmp]++;
    sum += tmp;
  }

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++) {
    ll b, c;
    cin >> b >> c;

    sum += (c - b) * counts[b]; // 移動させる分、sum を差分更新
    counts[c] += counts[b];  // カウントを移動
    counts[b] = 0;           // 移動させたカウント削除
    cout << sum << endl;
  }
}