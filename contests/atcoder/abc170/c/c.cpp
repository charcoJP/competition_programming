#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N;
  cin >> X >> N;

  int minDiff = ;

  set<int> set;
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    set.insert(tmp);
  }

  while (true) {
    if (set.find(X - minDiff) == set.end()) {
      // 存在しない
      cout << X - minDiff << endl;
      return 0;
    } else {
      if (set.find(X + minDiff) == set.end()) {
        // 存在しない
        cout << X + minDiff << endl;
        return 0;
      }
    }

    minDiff++;
  }
}