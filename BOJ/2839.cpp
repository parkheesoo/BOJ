#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int x3 = 0;
	int x5 = 0;
	int cnt = 0;
	cin >> N;

	int fN = 1;

	while (fN != 0) {
		fN = N;
		if (cnt == 0) {
			x5 = fN / 5;
			fN = fN - (5 * x5);
			x3 = fN / 3;
			fN = fN - (3 * x3);
			cnt++;
		}
		else {
			if (x5 > 0) {
				x5--;
			}

			if (x5 == 0) {
				if ((fN % 3) != 0) {
					cout << -1 << endl;
					return 0;
				}
			}
			fN = fN - (5 * x5);
			x3 = fN / 3;
			fN = fN - (3 * x3);
		}
	}

	cout << x3 + x5 << endl;
	return 0;
}