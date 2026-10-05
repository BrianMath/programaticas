#include <bits/stdc++.h>

int main() {
	int N, sereja = 0, dima = 0, player = 0;
	std::cin >> N;
	int vals[N];
	int l = 0, r = N-1;

	for (size_t i = 0; i < N; i++) {
		std::cin >> vals[i];
	}

	while (N--) {
		int max = 0;
		if (vals[l] > vals[r]) {
			max = vals[l];
			l++;
		} else {
			max = vals[r];
			r--;
		}
		
		if (!player) { sereja += max; }
		else { dima += max; }
		player = !player;
	}

	std::cout << sereja << ' ' << dima << '\n';

	return 0;
}