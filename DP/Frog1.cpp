#include <bits/stdc++.h>

using ll = long long;

int main() {
	ll N, pos = 1;
	std::cin >> N;
	
	ll stones[N+1];
	
	for (ll i = 1; i <= N; i++) {
		std::cin >> stones[i];
	}

	ll goal = stones[N];

	ll val = 0;
	while (pos < N) {
		ll p = stones[pos], p1 = stones[pos+1], p2, mais2;
		ll mais1 = std::abs(p - p1);
		
		if (pos+2 <= N) {
			p2 = stones[pos+2];
			mais2 = std::abs(p - p2);

			if (std::abs(p2 - goal) < std::abs(p1 - goal)) {
				val += mais2;
				pos += 2;
				continue;
			}
		}

		val += mais1;
		pos++;
	}

	std::cout << val << "\n";
}