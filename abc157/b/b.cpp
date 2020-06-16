#include <bits/stdc++.h>
using namespace std;

// b は 1 ~ 100 なので -1 をマーク済みとする
const int marked = -1;

int main() {
  int card[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> card[i][j];
    }
  }

  int N;
  cin >> N;

  // N は10以下なので愚直に回してcardに印をつける
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;

    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (card[j][k] == marked) continue;
        if (card[j][k] == tmp) {
          card[j][k] = marked;
          break;
        }
      }
    }
  }

  bool isBingo = false;
  // 横
  for (int i = 0; i < 3; i++) {
    if (card[i][0] == marked && card[i][1] == marked && card[i][2] == marked) {
      isBingo = true;
    }
  }

  // 縦
  for (int i = 0; i < 3; i++) {
    if (card[0][i] == marked && card[1][i] == marked && card[2][i] == marked) {
      isBingo = true;
    }
  }

  // 斜め
  if (card[0][0] == marked && card[1][1] == marked && card[2][2] == marked) {
    isBingo = true;
  }
  if (card[0][2] == marked && card[1][1] == marked && card[2][0] == marked) {
    isBingo = true;
  }

  cout << (isBingo ? "Yes" : "No") << endl;
}