#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	if (n <= 1) {
		return false;
	}
	if (n <= 3) {
		return true;
	}
	if (n % 2 == 0 || n % 3 == 0) {
		return false;
	}
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}

	return true;
}

void solve(int n, int m) {
	for (int i = m; i <= n; i++) {
		if (prime(i)) {
			cout << i << endl;
		}
	}
}

int main() {
	int t, n, m;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		solve(m, n);
		if (t > 0) {
			cout << endl;
		}
	}

	return 0;
}
