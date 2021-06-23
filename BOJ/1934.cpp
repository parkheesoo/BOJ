#include <iostream>

using namespace std;

int arr[45001] = { 0, };
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

void search() {
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;

	int smallnum = num1 < num2 ? num1 : num2;

	int left = 1;
	int i = 0;
	while (1) {
		for (i = 2; i <= smallnum; i++) {
			if (arr[i] == 0 && num1 % i == 0 && num2 % i == 0) {
				left *= i;
				num1 /= i;
				num2 /= i;
				break;
			}
		}
		if (i == smallnum + 1) {
			break;
		}
	}

	cout << left * num1 * num2 << endl;

	return;
}

int main() {
	int T = 0;
	cin >> T;

	primenumbermaker(45000);

	for (int i = 0; i < T; i++) {
		search();
	}
	
	return 0;
}