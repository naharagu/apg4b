#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int result = max(max(A, B), C) - min(min(A, B), C);
  cout << result << endl;
}