#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  for (int i = 0; i <= X; i++) {
    int y = X - i;
    if ((i * 2 + y * 4) == Y) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}