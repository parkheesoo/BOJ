#include <iostream>

using namespace std;

#define maxVal 1000001

int main() {
	cin.tie(NULL);
	// ios::sync_with_stdio(false);

	int m, n;

	cin >> m >> n;

	int num[maxVal] = {}; // 0���� �ʱ�ȭ

	for (int i = 2; i <= n; i++) {
		num[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (num[i] == 0) continue;
		for (int j = 2 * i; j <= n; j += i) {
			num[j] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (num[i] != 0) cout << num[i] << "\n";
	}

}