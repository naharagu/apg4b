#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

	int i = 0;
	int sum = 1;
	while(i < S.size())
	{
		if (S.at(i) == '1')
			i++;
		else if (S.at(i) == '+')
		{
			sum++;
			i++;
		}
		else if (S.at(i) == '-')
		{
			sum--;
			i++;
		}
	}
	cout << sum << endl;
}
