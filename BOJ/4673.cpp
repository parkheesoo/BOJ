#include <iostream>
#include <vector>

using namespace std;

int NselfNumDetector(int a) {
	int fa = a;
	int sum = 0;
	while (fa >= 10) {
		sum = sum + (fa % 10);
		fa /= 10;
	}
	sum += fa;
	return (sum + a);
}

int main() {
	int x = 0;
	vector <int> vec(10001);

	for (int i = 1; i < 10001; i++) {
		x = NselfNumDetector(i);
		if (x <= 10000) {
			vec[x] = 1;
		}
	}
	
	for (int i = 1; i < 10001; i++) {
		if (vec[i] == 0) {
			cout << i << endl;
		}
	}
	
	return 0;
}