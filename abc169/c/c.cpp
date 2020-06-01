#include <bits/stdc++.h>
using namespace std;

// 誤差, 浮動小数点
int main() {
  long long A;
  string B;
  cin >> A >> B;

  long long BB = (B[0] - '0') * 100 + (B[2] - '0') * 10 + (B[3] - '0');

  cout << (A * BB / 100) << endl;
}