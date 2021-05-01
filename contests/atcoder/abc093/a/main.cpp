#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool contains = S.find("a") != string::npos && S.find("b") != string::npos &&
                  S.find("c") != string::npos;

  cout << (contains ? "Yes" : "No") << endl;
}
