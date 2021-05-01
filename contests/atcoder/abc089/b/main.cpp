#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  set<char> type;
  for (int i = 0; i < N; i++) {
    char c;
    cin >> c;
    type.insert(c);
  }

  if (type.size() == 3) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
}
