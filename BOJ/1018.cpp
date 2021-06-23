#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int M = 0, N = 0;
	cin >> N >> M;

	string str;
	vector <vector <int>> vec;
	vector <int> tempvec;

	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < M; j++) {
			if (str[j] == 'W') {
				tempvec.push_back(0);
			}
			else {
				tempvec.push_back(1);
			}
		}
		vec.push_back(tempvec);
		tempvec.clear();
	}

	int count = (N - 7) * (M - 7);
	vector <int> cntvec(count);

	int sx = 0;
	int sy = 0;
	int startpoint = 0;

	for (int i = 0; i < count; i++) {
		startpoint = vec[sy][sx];
		for (int j = sy; j < (sy + 8); j++) {
			for (int k = sx; k < (sx + 8); k++) {
				if (((k - sx) + (j - sy)) % 2 == 1) {
					if (vec[j][k] == startpoint) {
						cntvec[i]++;
					}
				}
				else {
					if (vec[j][k] != startpoint) {
						cntvec[i]++;
					}
				}

			}
		}

		if ((sx + 8) == M) {
			sx = 0;
			sy++;
		}
		else {
			sx++;
		}
	}

	int minofcntvec = cntvec[0];

	for (int i = 1; i < count; i++) {
		if (cntvec[i] < minofcntvec) {
			minofcntvec = cntvec[i];
		}
	}

	cout << minofcntvec << endl;

	return 0;
}