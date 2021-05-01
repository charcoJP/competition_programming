#include <bits/stdc++.h>
using namespace std;

// see: https://qiita.com/drken/items/4a7869c5e304883f539b
// 順列全探索
int main() {
  int n;
  cin >> n;

  vector<int> order;
  int P[n], Q[n];
  for (int i = 1; i <= n; i++) {
    order.push_back(i);
  }

  for (int i = 0; i < n; i++) {
    cin >> P[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> Q[i];
  }

  int ordernum = 1;
  int pOrder = 0;
  int qOrder = 0;

  do {
    bool pMatched = true;
    bool qMatched = true;

    for (int i = 0; i < order.size(); i++) {
      int num = order[i];

      if (num != P[i]) pMatched = false;
      if (num != Q[i]) qMatched = false;
    }

    if (pMatched) pOrder = ordernum;
    if (qMatched) qOrder = ordernum;
    ordernum++;
  } while (next_permutation(order.begin(), order.end()));

  cout << (abs(pOrder - qOrder)) << endl;
}
