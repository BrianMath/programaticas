#include <bits/stdc++.h>

int main() {
	int N;
	std::cin >> N;
	std::vector<int> heights(N);

	for (size_t i = 0; i < N; i++) {
		std::cin >> heights[i];
	}
	
	std::vector<int> dp(N, INT32_MAX);

	dp[0] = 0;

	for (size_t i = 0; i < N-1; i++) {
		dp[i+1] = std::min(dp[i+1], dp[i] + std::abs(heights[i] - heights[i+1]));

		if (i+2 < N) {
			dp[i+2] = std::min(dp[i+2], dp[i] + std::abs(heights[i] - heights[i+2]));
		}
	}
	
	std::cout << dp[N-1] << "\n";
}