#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> operations;
  for (int i = 0; i < N; i++) {
    int o;
    cin >> o;
    operations.push_back(o - 1);
  }

  int position = 0;
  int count = 0;
  while (true) {
    int o = operations[position];
    if (position == 1) {
      cout << count << endl;
      break;
    }
    if (count >= N) {
      cout << -1 << endl;
      break;
    }

    count++;
    position = o;
  }
}
