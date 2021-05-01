#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int count = 0;

  regex re("ABC");
  sregex_iterator ite(S.begin(), S.end(), re);
  sregex_iterator end;

  smatch match;

  for (; ite != end; ++ite) {
    count++;
  }

  cout << count << endl;
}