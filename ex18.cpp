#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A.at(i) >> B.at(i);
	}
	vector<vector<char>> tab(N, vector<char>(N));

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			tab.at(x).at(y) = '-';
		}
	}

	for (int i = 0; i < M; i++)
	{
		tab.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
		tab.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
	}

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			cout << tab.at(x).at(y);
			if (y == N -1)
				cout << endl;
			else
				cout << " ";
		}
	}
}