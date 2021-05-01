#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int price = 700;
  for (size_t i = 0; i < S.length(); i++) {
    price += (S[i] == 'o' ? 100 : 0);
  }

  cout << price << endl;
}
