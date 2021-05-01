#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  int count = 0;

  for (int i = 1; i < N; i++) {
    set<char> left, right;
    int tmp = 0;
    for (int j = 0; j < i; j++) {
      left.insert(S[j]);
    }

    for (int j = i; j < N; j++) {
      right.insert(S[j]);
    }

    for (auto c : left) {
      if (right.find(c) != right.end()) {
        tmp++;
      }
    }
    count = max(count, tmp);
  }
  cout << count << endl;
}
