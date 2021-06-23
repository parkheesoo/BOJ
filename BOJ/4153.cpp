#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int side[3] = { 0, };

	while (1) {
		cin >> side[0] >> side[1] >> side[2];
		if (side[0] == 0) {
			return 0;
		}
		int max = side[0];
		int eside[2] = { 0, };
		eside[0] = side[1];
		eside[1] = side[2];

		for (int i = 0; i < 3; i++) {
			if (side[i] > max) {
				max = side[i];
				if (i == 1) {
					eside[0] = side[0];
				}
				else {
					eside[1] = side[1];
				}
			}
		}

		if (pow(max, 2) == (pow(eside[0], 2) + pow(eside[1], 2))) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
	return 0;
}