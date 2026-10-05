#include <bits/stdc++.h>

int main() {
	int T, N;
	bool found = false;
	std::set<int> set;
	std::cin >> T;

	while (T--) {
		std::cin >> N;
		int num;
		while (N--) {
			std::cin >> num;
			if (set.find(num) == set.cend()) {
				set.insert(num);
			} else {
				found = true;
			}
		}
		if (found) { std::cout << "No\n"; }
		else { std::cout << "Yes\n"; }
		
		set.clear();
		found = false;
	}

	return 0;
}