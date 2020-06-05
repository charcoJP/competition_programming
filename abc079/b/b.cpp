#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int N;
  cin >> N;

  ll list[N + 1];
  list[0] = 2;
  list[1] = 1;

  for (int i = 2; i <= N; i++) {
    list[i] = list[i - 1] + list[i - 2];
  }

  cout << list[N] << endl;
}