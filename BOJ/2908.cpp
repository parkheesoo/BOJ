#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, y = 0;
	int x1, y1 = 0;
	int rx = 0;
	int ry = 0;
	int i = 2;
	cin >> x >> y;


	while (x > 10) {
		x1 = x % 10;
		y1 = y % 10;
		y /= 10;
		x /= 10;

		rx += (x1 * pow(10, i));
		ry += (y1 * pow(10, i));
		i--;
	}
	rx += x;
	ry += y;

	rx > ry ? cout << rx << endl : cout << ry << endl;

	return 0;
}
