#include <bits/stdc++.h>

int main() {
	int Q;
	std::map<int, int> map;
	std::cin >> Q;

	while (Q--) {
		int q, x, c, min;
		std::cin >> q;
		if (q == 3) {
			std::cout << map.rbegin()->first - map.begin()->first << '\n';
			continue;
		}

		std::cin >> x;
		auto search = map.find(x);
		if (q == 1) {
			if (search != map.cend()) {
				search->second++;
			} else {
				map.insert({x, 1});
			}
			continue;
		}

		std::cin >> c;
		if (search == map.cend()) { continue; } 
		search->second -= c < search->second ? c : search->second;
		if (search->second == 0) { map.erase(x); }	
	}

	return 0;
}