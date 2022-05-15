#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i = 0;
	vector<int> data(5);

	while (i < 5)
	{
		cin >> data.at(i);
		i++;
	}
	i = 0;
	int flag = 0;
	while (i < 4)
	{
		if (data.at(i) == data.at(i + 1))
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "YES" << endl;
	else if (flag == 0)
		cout << "NO" << endl;
}