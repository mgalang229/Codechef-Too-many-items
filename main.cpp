#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << (n + 10 - 1) / 10 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
