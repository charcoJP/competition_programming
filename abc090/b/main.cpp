#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int count = 0;
  for (int i = A; i <= B; i++) {
    // 必ず5桁である前提
    int h = i / 10000;
    int t = i % 10;

    int h1 = i / 1000 % 10;
    int t2 = i / 10 % 10;

    if (h == t && h1 == t2) {
      count++;
    }
  }
  cout << count << endl;
}
