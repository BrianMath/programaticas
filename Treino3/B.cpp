#include <bits/stdc++.h>

int sumDiff(int cA, int cB, int N) {
	int diff, sum = 0;
	diff = cA - N/3; sum += diff;
	cB += diff;
	diff = cB - N/3; sum += diff;
	return sum;
}

int main() {
	int T;
	std::cin >> T;

	while (T--) {
		int N, moves, c0 = 0, c1 = 0, c2 = 0;
		std::cin >> N;

		for (size_t i = 0; i < N; i++) {
			int n;
			std::cin >> n;

			if (n%3 == 0) { c0++; }
			else if (n%3 == 1) { c1++; }
			else { c2++; }
		}

		if (c0 == c1 && c1 == c2) { 
			std::cout << 0 << '\n';
			continue;
		}

		if (c0 >= c1 && c0 >= c2) {
			moves = sumDiff(c0, c1, N);
		} else if (c1 >= c0 && c1 >= c2) {
			moves = sumDiff(c1, c2, N);
		} else {
			moves = sumDiff(c2, c0, N);
		}

		std::cout << moves << '\n';
	}

	return 0;
}