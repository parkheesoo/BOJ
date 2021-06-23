#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int i = 0;

	vector <vector<int>>vec(N, vector<int>(N, 0));

	for (int k = 3; k <= N; k *= 3) {
		for (i; i <= k-1; i++) {
			if (i % 3 == 1) {
				for (int j = 1; j < N; j += 3) {
					vec[i][j] = 1;
				}
			}

			if (k == 3) {
			}
			else {
				if ((i + 1) > (k / 3) && (i + 1) <= 2 * (k / 3)) {
					for (int j = (k / 3); j < N; j += 2 * (k / 3)) {
						for (int s = j; s < (j +(k / 3)); s++) {
							vec[i][s] = 1;
						}
					}
				}
			}
		}
	}
	
	for (int i = 0; i < 2 * (N /3); i++) {
		for (int j = 0; j < N; j++) {
			if (vec[i][j] == 0) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}

	for (int i = 0; i < (N / 3); i++) {
		for (int j = 0; j < N; j++) {
			if (vec[i][j] == 0) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}

	return 0;
}