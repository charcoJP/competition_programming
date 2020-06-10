#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;

  for (int i = 0; i < X.length(); i++) {
    char tmp = X[i];

    if (tmp == 'c' && i < X.length()) {
      i++;
      if (X[i] != 'h') {
        cout << "NO" << endl;
        return 0;
      }
    } else if (tmp == 'o' || tmp == 'k' || tmp == 'u') {
      // noop
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}