#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		double arr[6] = { 0.0, };
		
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

		double distance = sqrt(pow((arr[0] - arr[3]), 2) + pow((arr[1] - arr[4]), 2));
		double bigr = arr[2] > arr[5] ? arr[2] : arr[5];
		double smallr = arr[2] < arr[5] ? arr[2] : arr[5];

		if (arr[2] == arr[5]) {
			bigr = arr[2];
			smallr = arr[2];
		}

		if (arr[0] == arr[3] && arr[1] == arr[4]) {
			if (arr[2] == arr[5]) {
				cout << -1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (distance > bigr) {
			if (distance == (arr[2] + arr[5])) {
				cout << 1 << endl;
			}
			else if (distance > (arr[2] + arr[5])) {
				cout << 0 << endl;
			}
			else if (distance < (arr[2] + arr[5])) {
				cout << 2 << endl;
			}
		}
		else if (distance == bigr) {
			cout << 2 << endl;
		}
		else if (distance < bigr) {
			if ((distance + smallr) < bigr) {
				cout << 0 << endl;
			}
			else if ((distance + smallr) == bigr) {
				cout << 1 << endl;
			}
			else if ((distance + smallr) > bigr) {
				cout << 2 << endl;
			}
		}

	}
	return 0;
}