#include <bits/stdc++.h>

int main() {
	int A, B, C;

	std::cin >> A;
	std::cin >> B;
	if (B > A) { C = A; A = B; B = C; }
	std::cin >> C;
	if (C > A) {
		std::cout << (C*10)+A+B << '\n';
	}
	else {
		std::cout << (A*10)+C+B << '\n';
	}

	return 0;
}