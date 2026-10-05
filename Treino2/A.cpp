#include <bits/stdc++.h>

int main() {
	size_t N, n;
	std::set<int> nums;
	std::cin >> N;

	while (N--) {
		std::cin >> n;
		nums.insert(n);
	}

	std::cout << nums.size() << '\n';

	return 0;
}