#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;

  double tWinRate = B / A;
  double aWinRate = D / C;

  if (tWinRate > aWinRate) {
    cout << "TAKAHASHI" << endl;
  } else if (tWinRate < aWinRate) {
    cout << "AOKI" << endl;
  } else {
    cout << "DRAW" << endl;
  }
}