#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	string w = "W";
	for (int i = 0; i < x; i++) {
		w += 'o';
	}
	
	cout << w + 'w' << endl;

	return 0;
}
