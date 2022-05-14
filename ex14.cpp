#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
  	cin >> N;

	vector<int> vec(N);
	int i = 0;
	int sum = 0;
	while(i < N)
	{
		cin >> vec.at(i);
		sum += vec.at(i);
		i++;
	}
	int average = sum / N;
	i = 0;
	while (i < N)
	{
		if (vec.at(i) >= average)
			cout << vec.at(i) - average << endl;
		else
			cout << average - vec.at(i) << endl;
		i++;
	}
}
