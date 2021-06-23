#include <iostream>
#include <vector>

using namespace std;

int arr[1000000000] = { 0, };
void primenumbermaker(int num) {
	for (int i = 2; i <= num; i++) {
		if (arr[i] != 1) {
			for (int j = i * 2; j <= num; j += i) {
				arr[j] = 1;
			}
		}
	}
	return;
}

void printcommon(int left) {

	return;
}

int main() {
	int N = 0;
	cin >> N;

	int num = 0;
	vector <int> Nvec;
	for (int i = 0; i < N; i++) {
		cin >> num;
		Nvec.push_back(num);
	}
	
	primenumbermaker(Nvec[0] + 1);

	int left = 1;
	int el = 0;
	int k = 0;
	vector <int> tempNvec(N);
	for (int i = 0; i <= Nvec[0]; i++) {
		for (int j = 0; j < N; j++) {
			tempNvec[j] = Nvec[j] - i;
		}

		for (int j = 2; j <= tempNvec[0]; j++) {
			if (arr[j] == 0) {
				for (k = 0; k < N; k++) {
					if (tempNvec[k] % j != 0) {
						break;
					}
				}
				if (k == N) {
					left *= j;
					for (int s = 0; s < N; s++) {
						tempNvec[s] /= j;
					}
				}
			}
		}

		if (left != 1) {
			printcommon(left);
			left = 1;
		}
	}
	return 0;
}