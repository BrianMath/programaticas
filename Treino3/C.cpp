#include <bits/stdc++.h>

int main() {
	int N, max = 1, l = 0, r = 1, curr, prev;
	std::cin >> N;
	std::cin >> prev;

	for (size_t i = 1; i < N; i++, r++, prev = curr) {
		std::cin >> curr;
		if (curr <= prev) {
			max = max < r-l ? r-l : max;
			l = r;
		}
	}

	max = max < r-l ? r-l : max;

	std::cout << max << '\n';

	return 0;
}