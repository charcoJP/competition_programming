#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, int> map;

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;

    auto ite = map.find(num);
    if (ite != map.end()) {
      map[num] = map[num] +1;
    } else {
      map[num] = 1;
    }
  }

  int ans = 0;
  for(auto entry : map) {
    if (entry.second % 2 != 0) {
      ans++;
    }
  }

  std::cout << ans << endl;
}