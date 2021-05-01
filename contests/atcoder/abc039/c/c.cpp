#include <bits/stdc++.h>
using namespace std;

int main() {
  string doremi[12] = {"Do",  "Do#", "Re",  "Re#", "Mi",  "Fa",
                       "Fa#", "So",  "So#", "La",  "La#", "Si"};
  string kenban = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";

  string S;
  cin >> S;

  int pos = kenban.find(S);
  cout << doremi[pos] << endl;
}