#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int busFee = min(A, B);
  int trainFee = min (C, D);

  cout << busFee + trainFee << endl;
}
