#include <bits/stdc++.h>

int main() {
	int N, n1, n2;
	std::cin >> N;
	std::cin >> n1;
	N--;

	while (N--) {
		std::cin >> n2;
		if (n2 <= n1) {
			std::cout << "No\n";
			return 0;
		}
		n1 = n2;
	}

	std::cout << "Yes\n";

	return 0;
}