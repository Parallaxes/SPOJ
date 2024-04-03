#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int l, c;
		cin >> l >> c;

		int pos = 0;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				if (pos % 2 == 0) {
					cout << "*";
					pos++;
				} else {
					cout << ".";
					pos++;
				}	
			}
			if (c % 2 == 0) {
				pos++;
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}
