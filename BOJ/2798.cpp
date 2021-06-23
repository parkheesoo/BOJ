#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	int M = 0;
	int x = 0;
	int sum = 0;
	int x1 = 0;
	int x2 = 0;
	int max = 0;

	cin >> N >> M;
	
	vector <int>vec;
	for (int i = 0; i < N; i++) {
		cin >> x;
		vec.push_back(x);
	}

	for (int i = 0; i < N - 2; i++) {
		x1 = vec[i];
		for (int j = i + 1; j < N - 1; j++) {
			x2 = vec[j];
			for (int k = i + 1; k < N; k++) {
				if (k != j) {
					sum = x1 + x2 + vec[k];

					if (sum < M && sum > max) {
						max = sum;
					}

					if (sum == M) {
						cout << M << endl;
						return 0;
					}
				}
			}
		}
	}


	cout << max << endl;

	return 0;
}