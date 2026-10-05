#include <bits/stdc++.h>

int main() {
	bool neg = true;
	std::string S, T;
	std::cin >> S >> T;
	
	int K = S[0]-T[0];

	if (S[0] < T[0]) {
		K = std::abs(K);
	} else {
		K = 26 - K;
		neg = !neg;
	}

	for (auto [c1, c2] : std::views::zip(S, T)) {
		auto tmp = c1 + K;

		if (tmp > 'z') {
			tmp -= 26;
		}

		if (tmp != c2) {
			std::cout << "No\n";
			return 0;
		}
	}

	std::cout << "Yes\n";

	return 0;
}