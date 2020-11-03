#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  // 前から判定すると prefix の重複により正しく判定できないため reverse して後ろから判定する
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

  for (int i = 0; i < S.size();) {
    bool exists = false;
    for (int j = 0; j < 4; j++) {
      string s = divide[j];
      if (S.substr(i, s.size()) == s) {
        i += s.size();
        exists = true;
        break;
      }
    }

    if (!exists) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
