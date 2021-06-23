#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int x1 = 0;
	int x2 = 0;
	ostringstream oss;

	while (1) {
		cin >> x1 >> x2;
		if (x1 == 0) {
			break;
		}
		if (x2 == (x2 / x1) * x1) {
			oss << "factor" << endl;
		}
		else if (x1 == (x1 / x2) * x2) {
			oss << "multiple" << endl;
		}
		else {
			oss << "neither" << endl;
		}
	}

	cout << oss.str();

	return 0;
}