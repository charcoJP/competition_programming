#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> ateList(N), satiList(N), additionalSatiList(N);
  for (int i = 0; i < N; i++) {
    cin >> ateList[i];
    ateList[i]--;  // 0 based
  }
  for (int i = 0; i < N; i++) cin >> satiList[i];
  for (int i = 0; i < N; i++) cin >> additionalSatiList[i];

  int satisfiedScore = 0;
  for (int i = 0; i < N; i++) {
    satisfiedScore += satiList[ateList[i]];
    if (i > 0 && ateList[i] == ateList[i - 1] + 1) {
      satisfiedScore += additionalSatiList[ateList[i - 1]];
    }
  }

  cout << satisfiedScore << endl;
}
