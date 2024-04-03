#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, i;
        cin >> n;

        int sum = 0;
        for (i = 1; i * i < n; i++) {
            if (n % i == 0) {
                sum += i + n/i;
            } 
        }

        if (i * i == n) {
            sum += i;
        } 
        sum -= n;

        cout << sum << endl;
    }

    return 0;
}
