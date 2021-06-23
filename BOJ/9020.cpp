#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	vector <int>vec(10001);
	vec[1] = 1;
	int n = 0;
	int x = 0;
	int y = 0;
	int x1y = 0;
	int cnt = 0;
	int T = 0;

	for (int i = 2; i <= 10000; i++) {
		if (vec[i] == 1) {}
		else {
			for (int j = (i * 2); j <= 10000; j += i) {
				vec[j] = 1;
			}
		}
	}

	cin >> T;

	for (int k = 0; k < T; k++) {
		cin >> n;
		for (int i = 2; i <= n; i++) {
			if (vec[i] == 0) {
				if (vec[n - i] == 0) {
					if (cnt != 0 && abs((2 * i) - n) < x1y) {
						x = i;
						y = n - i;
						x1y = abs(x - y);
					}
					else if (cnt == 0) {
						x = i;
						y = n - i;
						x1y = abs(x - y);
						cnt++;
					}
				}
			}
		}
		cout << x << " " << y << endl;
		cnt = 0;
	}
	
	return 0;
}