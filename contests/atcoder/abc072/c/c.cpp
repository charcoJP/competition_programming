#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, int> countMap;

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    countMap[num + 1]++;
    countMap[num]++;
    countMap[num - 1]++;
  }

  int ans = 0;
  for (auto c : countMap) {
    ans = max(ans, c.second);
  }

  cout << ans << endl;
}