#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int b;
  string op;

  cin >> a >> op >> b;

  if (op == "+")
    cout << a + b << endl;
  else if (op == "-")
    cout << a - b << endl;
  else if (op == "*")
    cout << a * b << endl;
  else if (op == "/")
  {
    if (b == 0)
      cout << "error" << endl;
    else
      cout << a / b << endl;
  }
  else if (op == "?")
    cout << "error" << endl;
  else if (op == "=")
    cout << "error" << endl;
  else if (op == "!")
    cout << "error" << endl;
}
