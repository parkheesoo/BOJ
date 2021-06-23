#include <iostream>
#include <vector>

using namespace std;

int max_size = 123456;

int main() {
	vector <int> vec((max_size *2) + 1);
	vec[1] = 1;

	for (int i = 2; i <= (max_size *2); i++) {
		if (vec[i] == 1) {}
		else {
			for (int j = (i * 2); j <= (max_size * 2); j += i) {
				vec[j] = 1;
			}
		}
	}

	int n = 0;
	int cnt = 0;

	while (1) {
		cin >> n;

		if (n == 0) {
			break;
		}

		for (int i = (n + 1); i <= (2 * n); i++) {
			if (vec[i] == 0) {
				cnt++;
			}
		}

		cout << cnt << endl;
		cnt = 0;
	}
	
	return 0;
}