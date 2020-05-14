#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  string reverseN(N);
  cout << reverseN << endl;
  
  reverse(reverseN.begin(), reverseN.end());

  cout << reverseN << endl;

  cout << (N == reverseN ? "Yes" : "No") << endl;
}