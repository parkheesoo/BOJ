#include <iostream>

using namespace std;

int arr[31] = { 0, };
void primenumbermaker() {
	for (int i = 2; i <= 15; i++) {
		if (arr[i] != 1) {
			for (int j = i * 2; j <= 30; j += i) {
				arr[j] = 1;
			}
		}
	}
	return;
}

void bridge() {
	int N = 0, M = 0;
    int up = 1;
	int down = 1;

	cin >> N >> M;

	int k = 0;
	int j = N;
	for (int i = M; i > (M - N); i--) {
		up *= i;
		down *= j;
		j--;
		while (1) {
			for (k = 2; k < 30; k++) {
				if (arr[k] == 0 && up % k == 0 && down % k == 0) {
					up /= k;
					down /= k;
					break;
				}
			}
			if (k == 30) {
				break;
			}
		}
	}
	cout << up / down << endl;

	return;
}

int main() {
	int T = 0;

	cin >> T;

	primenumbermaker();
	for (int i = 0; i < T; i++) {
		bridge();
	}

	return 0;
}