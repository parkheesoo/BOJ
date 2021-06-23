#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	vector <int> vec;
	int n = 0;
	while (N > 10) {
		n = N % 10;
		N = N / 10;
		vec.push_back(n);
	}
	vec.push_back(N);

	sort(vec.begin(), vec.end(), greater<int>());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
	return 0;
}