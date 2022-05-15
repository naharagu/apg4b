#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, S;
	cin >> N >> S;
	vector<int> A(N), P(N);
	for (int i = 0; i < N; i++) {
	cin >> A.at(i);
	}
	for (int i = 0; i < N; i++) {
	cin >> P.at(i);
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			if (A.at(i) + P.at(k) == S)
				count++;
		};
	}
	cout << count << endl;
}
