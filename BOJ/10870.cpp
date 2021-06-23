#include <iostream>

using namespace std;

int Fibonacci(int a) {
	if (a <= 1) {
		return a;
	}
	return (Fibonacci(a - 1) + Fibonacci(a - 2));
}

int main() {
	int n = 0;
	cin >> n;

	cout << Fibonacci(n) << endl;

	return 0;
}