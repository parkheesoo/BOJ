#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int arr[8] = { 2, 8, 1, 0, 10,7, 20,9 };
	sort(arr, arr + 8);
	
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] < arr[i - 1]) {
			cout << "False" << endl;
			return 0;
		}
	}

	cout << "True" << endl;

	return 0;
}