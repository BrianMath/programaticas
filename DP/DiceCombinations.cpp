#include <bits/stdc++.h>

using ll = long long;
std::vector<ll> count(10000001);

int main() {
	int N;
	std::cin >> N;

	count[0] = 1;

	for (ll i = 1; i <= N; i++) {
		for (ll j = 1; j <= 6; j++) {
			if (i-j >= 0) {
				count[i] += count[i-j];
				count[i] %= 1000000007;
			}
		}
	}
	
	std::cout << count[N] << "\n";
}