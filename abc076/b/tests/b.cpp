#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int x = 1;
  for (int i = 0; i < N; i++) {
    int a = x * 2;
    int b = x + K;
    x = min(a, b);
  }

  cout << x << endl;
}