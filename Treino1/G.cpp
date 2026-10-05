#include <bits/stdc++.h>

using ull = unsigned long long;

int main() {
	int N, K, next = 0;
	std::cin >> N >> K;
	std::set<ull> set;

	while (N--) {
		int tmp;
		std::cin >> tmp;
		set.insert(tmp);
	}

	for (int i = 0; i < K; i++) {
		if (set.find(i) == set.end()) {
			std::cout << i << '\n';
			return 0;
		}
	}
	
	std::cout << K << '\n';

	return 0;
}