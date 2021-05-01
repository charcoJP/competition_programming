#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// bit全探索
int main() {
  string s;
  cin >> s;

  // 2^3 通りを bit全探索で求める
  for (int bit = 0; bit < bit < (1 << 3); bit++) {
    int result = s[0] - '0';
    string equation;
    equation = s[0];
    for (int i = 1; i < 4; i++) {
      // bit == 1 を +, 0 を - として扱う
      if (bit & (1 << (i - 1))) {
        equation = equation + "+" + s[i];
        result += s[i] - '0';
      } else {
        equation = equation + "-" + s[i];
        result -= s[i] - '0';
      }
    }

    if (result == 7) {
      cout << equation << "=7" << endl;
      return 0;
    }
  }
}

// 解説通りの解き方
// int a = s[0] - '0';
// int b = s[1] - '0';
// int c = s[2] - '0';
// int d = s[3] - '0';

// if (a + b + c + d == 7)
//   cout << a << "+" << b << "+" << c << "+" << d << "=7" << endl;
// else if (a + b + c - d == 7)
//   cout << a << "+" << b << "+" << c << "-" << d << "=7" << endl;
// else if (a + b - c + d == 7)
//   cout << a << "+" << b << "-" << c << "+" << d << "=7" << endl;
// else if (a - b + c + d == 7)
//   cout << a << "-" << b << "+" << c << "+" << d << "=7" << endl;
// else if (a + b - c - d == 7)
//   cout << a << "+" << b << "-" << c << "-" << d << "=7" << endl;
// else if (a - b + c - d == 7)
//   cout << a << "-" << b << "+" << c << "-" << d << "=7" << endl;
// else if (a - b - c + d == 7)
//   cout << a << "-" << b << "-" << c << "+" << d << "=7" << endl;
// else if (a - b - c - d == 7)
//   cout << a << "-" << b << "-" << c << "-" << d << "=7" << endl;