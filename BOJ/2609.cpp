#include <iostream>
#include <vector>

using namespace std;

int arr[10001] = { 0, };
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

int main() {
	int mul = 1;
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	int bignum = num1 > num2 ? num1 : num2;
	primenumbermaker(bignum);
	int i = 2;
	while (1) {
		for (i = 2; i <= bignum; i++) {
			if (arr[i] == 0) {
				if (num1 % i == 0 && num2 % i == 0) {
					mul *= i;
					num1 /= i;
					num2 /= i;
					break;
				}
			}
		}
		if (i == bignum + 1) {
			break;
		}
	}

	cout << mul << endl;
	cout << mul * num1 * num2 << endl;
	
	return 0;
}