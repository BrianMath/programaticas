#include <bits/stdc++.h>

using ull = unsigned long long;

int main() {
	ull sum = 0, num;
	std::string N;
	char c;
	std::cin >> N;

	for (ull i = 0 ;; i++) {
		c = N[i];
		if (c == '\0') { break; }
		sum += c - '0';
	}
	num = std::stoull(N);
	std::cout << (num%sum == 0 ? "Yes" : "No") << '\n';

	return 0;
}