#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> pList;
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    pList.push_back(tmp);
  }

  sort(pList.begin(), pList.end());  // 昇順

  int ans = 0;
  for (int i = 0; i < K; i++) {
    ans += pList[i];
  }

  cout << ans << endl;
}