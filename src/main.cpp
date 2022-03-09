#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

vi wis;
vi leftMost;
vi rightMost;

void solvePart(int n, int index) {
	cout << leftMost[index] << ' ' << rightMost[index] << '\n';
}

void solve(int n) {
	for (int i = 0; i < n; ++i) {
		solvePart(n, i);
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	wis = vi(n);
	for (int i = 0; i < n; ++i) {
		cin >> wis[i];
	}

	leftMost = vi(n);
	auto lm = wis[0];
	for (int i = 0; i < n; ++i) {
		if (lm < wis[i]) {
			lm = wis[i];
		}

		leftMost[i] = lm;
	}

	rightMost = vi(n);
	auto rm = wis[n - 1];
	for (int i = n - 1; 0 <= i; --i) {
		if (rm < wis[i]) {
			rm = wis[i];
		}

		rightMost[i] = rm;
	}

	solve(n);

	return 0;
}