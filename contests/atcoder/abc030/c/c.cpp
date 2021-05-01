#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  int a[N], b[M];
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < M; i++) cin >> b[i];

  int aIndex = 0;
  int bIndex = 0;
  bool isGoing = true;
  int currentTime = 0;
  int count = 0;

  while (true) {
    if (isGoing) {
      if (aIndex >= N) break;
      if (currentTime <= a[aIndex]) {
        currentTime = a[aIndex] + X;
        count++;
        isGoing = false;
      }
      aIndex++;
    } else {
      if (bIndex >= M) break;
      if (currentTime <= b[bIndex]) {
        currentTime = b[bIndex] + Y;
        count++;
        isGoing = true;
      }
      bIndex++;
    }
  }

  cout << count / 2 << endl;
}