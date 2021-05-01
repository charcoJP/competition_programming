#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// see: https://drken1215.hatenablog.com/entry/2020/06/21/225500
// 進数(亜種)
int main() {
  ll N;
  cin >> N;

  vector<int> list;
  ll num = N;
  while (num > 0) {
    num--;

    list.push_back(num % 26);
    num /= 26;
  }

  for (int i = list.size() - 1; i >= 0; i--) {
    cout << (char)('a' + list[i]);
  }
  cout << endl;
}