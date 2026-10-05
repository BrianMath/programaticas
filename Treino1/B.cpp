#include <bits/stdc++.h>

using ull = unsigned long long;

int main() {
	ull N, A, minA, posMinA = 0;
	std::cin >> N;
	std::string people[N];

	std::cin >> people[0];
	std::cin >> minA;
	for (ull i = 1; i < N; i++) {
		std::cin >> people[i];
		std::cin >> A;
		
		if (A < minA) {
			minA = A;
			posMinA = i;
		}
	}

	for (ull count = 0; count < N; count++) {
		std::cout << people[(posMinA++)%N] << '\n';
	}

	return 0;
}
