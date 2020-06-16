#include <bits/stdc++.h>
using namespace std;

// TODO: 実装が汚い。もう少し整理出来そうな気がする
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> data(N, -1);

  for (int i = 0; i < M; i++) {
    int s, c;

    cin >> s >> c;
    s--;  // 0 base

    if (data[s] != -1 && data[s] != c) {
      // 同じ桁に異なる数値が指定された場合は選べないので処理終了
      cout << -1 << endl;
      return 0;
    }
    data[s] = c;
  }

  string ans = "";
  for (int i = 0; i < N; i++) {
    if (data[i] == -1) {
      // 2桁以上で最初の桁なら1, そうでないなら0にする
      if (N > 1 && i == 0)
        ans += "1";
      else
        ans += "0";
    } else {
      ans += data[i] + '0';
    }
  }

  // 2桁以上で先頭0はNG
  if (N > 1 && ans[0] == '0') {
    cout << -1 << endl;
    return 0;
  }

  cout << ans << endl;
}