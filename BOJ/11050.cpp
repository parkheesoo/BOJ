#include <iostream>

using namespace std;

int main() {
	int up = 1;
	int down = 1;
	int N = 0, k = 0;
	cin >> N >> k;
	for (int i = N; i > (N-k); i--) {
		up *= i;
	}
	for (int i = k; i > 1; i--) {
		down *= i;
	}

	cout << up / down << endl;
	return 0;
}