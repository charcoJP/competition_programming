#include <bits/stdc++.h>
using namespace std;

// TODO: 簡潔に書けないのかな
typedef std::pair<int, int> p;

int main() {
  int H, W;
  cin >> H >> W;

  string a[H];
  for (int i = 0; i < H; i++) cin >> a[i];

  // 8マスチェック用
  pair<int, int> xyPair[8] = {
      p(1, 0), p(0, 1),   p(-1, 0), p(0, -1),
      p(1, 1), p(-1, -1), p(1, -1), p(-1, 1),
  };

  for (int y = 0; y < H; y++) {
    for (int x = 0; x < W; x++) {
      if (a[y][x] == '#') continue;

      int mineCount = 0;

      for (pair<int, int> p : xyPair) {
        int xx = x + p.first;
        int yy = y + p.second;

        if (xx < 0 || W <= xx) continue;
        if (yy < 0 || H <= yy) continue;

        if (a[yy][xx] == '#') mineCount++;
      }
      a[y][x] = char(mineCount + '0');
    }
  }

  for (int i = 0; i < H; i++) {
    cout << a[i] << endl;
  }
}