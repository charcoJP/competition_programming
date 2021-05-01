#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int i = 1;
  while (true) {
    i *= 2;
    if (i > N) {
      break;
    }
  }
  cout << i / 2 << endl;
}