#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;

  cin >> N;
  vector<string> blueCards(N);
  for (int i = 0; i < N; i++) cin >> blueCards[i];

  cin >> M;
  vector<string> redCards(M);
  for (int i = 0; i < M; i++) cin >> redCards[i];

  map<string, int> map;
  for (string c : blueCards) {
    map[c]++;

  }
  for (string c : redCards) {
    map[c]--;
  }

  // マイナスになる場合はカードに無い文字列を言って0円とする
  int ans = 0;
  for (auto entry : map) {
    ans = max(ans, entry.second);
  }
  cout << ans << endl;
}
