#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  int sum = 0;
  cin >> sum;

  for (int i = 0; i < count; i++) {
	string op;
	int x;
	cin >> op;
    cin >> x;

	if (op == "+")
	{
		sum += x;
		cout << i + 1 << ":" << sum << endl;
	}
	else if (op == "-")
	{
   		sum -= x;
		cout << i + 1 << ":" << sum << endl;
	}
	else if (op == "*")
	{
		sum *= x;
		cout << i + 1 << ":" << sum << endl;
	}
	else if (op == "/")
	{
		if (x == 0)
		{
			cout << "error" << endl;
			break;
		}
		else
		{
 			sum /= x;
			cout << i + 1 << ":" << sum << endl;
		}
	}
  }
}
