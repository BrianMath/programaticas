#include <bits/stdc++.h>

int main() {
	std::string S;
	std::cin >> S;

	int posA = S.find('A');
	int posZ = S.rfind('Z');

	std::cout << posZ - posA + 1 << '\n';

	return 0;
}