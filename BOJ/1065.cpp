#include <iostream>
#include <vector>

using namespace std;
int NHansuDetector(int n);

int main() {
	int N = 0;
	vector <int> vec;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (NHansuDetector(i) == 1) {
			vec.push_back(i);
		}
	}

	if (vec.empty() != 1) {
		cout << vec.size() << endl;
	}

	return 0;
}

int NHansuDetector(int n) {
	int fn = 0;
	int x1, x2 = 0;
	int num = 0;
	int d1 = 0;
	int d2 = 0;
	int cnt = 0;

	if (n < 100) {
		return 1;
	}
	else{
		if (n == 1000) {
			return 0;
		}
		else {
			fn = n;
		}
		
		while (fn > 10) {
			if (num == 0) {
				x1 = fn % 10;
				fn /= 10;
				num++;
			}
			else if (num == 1) {
				x2 = fn % 10;
				fn /= 10;
				d1 = x2 - x1;
			}
		}
		d2 = fn - x2;
		if (d1 == d2) {
			return 1;
		}
		else {
			return 0;
		}
	}
}