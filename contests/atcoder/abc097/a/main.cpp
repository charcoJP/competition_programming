#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  bool canTalk = (abs(A - B) <= D && abs(B - C) <= D) || abs(A - C) <= D;
  cout << (canTalk ? "Yes" : "No") << endl;
}
