#include <iostream>

using namespace std;

int main() {
	int x[3] = { 0, };
	int y[3] = { 0, };
	int qx = 0;
	int qy = 0;

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	
	if (x[0] == x[1]) {
		qx = x[2];
	}
	else if (x[0] == x[2]) {
		qx = x[1];
	}
	else {
		qx = x[0];
	}

	if (y[0] == y[1]) {
		qy = y[2];
	}
	else if (y[0] == y[2]) {
		qy = y[1];
	}
	else {
		qy = y[0];
	}

	cout << qx << " " << qy << endl;

	return 0;
}