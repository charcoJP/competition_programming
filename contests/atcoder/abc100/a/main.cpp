#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  bool canDivide = A <= 8 && B <= 8;

  cout << (canDivide ? "Yay!" : ":(") << endl;
}
