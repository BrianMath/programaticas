#include <bits/stdc++.h>

int main() {
	int N;
	std::cin >> N;
	std::vector<int> nums(N);

	for (size_t i = 0; i < N; i++) {
		std::cin >> nums[i];
	}

	std::sort(nums.begin(), nums.end());

	for (int n : nums) {
		std::cout << n << ' ';
	}

	std::cout << '\n';

	return 0;
}