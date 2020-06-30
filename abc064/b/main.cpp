#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> list;
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    list.push_back(tmp);
  }

  sort(list.begin(), list.end());  // 昇順
  
  int min = list[0];
  int max = list[N - 1];

  cout << max - min << endl;
}
