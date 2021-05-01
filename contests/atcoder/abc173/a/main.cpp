#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int d = N / 1000;
  if (N % 1000 == 0) {
    cout << 0 << endl;
  } else {
    cout << ((d + 1) * 1000 - N) << endl;
  }
}