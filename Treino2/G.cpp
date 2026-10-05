#include <bits/stdc++.h>

int main() {
	int Q;
	std::map<int, int> map;
	std::cin >> Q;

	while (Q--) {
		int q, x;
		std::cin >> q;
		if (q == 3) {
			std::cout << map.size() << '\n';
			continue;
		}
		std::cin >> x;
		if (q == 1) {
			if (auto search = map.find(x); search != map.end()) {
				search->second++;
			} else {
				map.insert({x, 1});
			}
		}
		else {
			auto search = map.find(x);
			if (search->second == 1) {
				map.erase(x);
			} else {
				search->second--;
			}
		}
	}

	return 0;
}