#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int acCount = 0, waCount = 0, tleCount = 0, reCount = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (s == "AC")
      acCount++;
    else if (s == "WA")
      waCount++;
    else if (s == "TLE")
      tleCount++;
    else if (s == "RE")
      reCount++;
  }

  cout << "AC x " << acCount << endl;
  cout << "WA x " << waCount << endl;
  cout << "TLE x " << tleCount << endl;
  cout << "RE x " << reCount << endl;
}