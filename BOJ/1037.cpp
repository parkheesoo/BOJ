#include <iostream>

using namespace std;

int main() {
	int N = 0;
	long long small = 0;
	long long big = 0;
	long long temp = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (i == 0) {
			small = temp;
			big = temp;
		}
		
		if (small > temp) {
			small = temp;
		}

		if (big < temp) {
			big = temp;
		}
	}
	cout << small * big << endl;
	return 0;
}