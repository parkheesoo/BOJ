#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	vector <int> vec;

	cin >> N;

	int x = 0;
	for (int i = 0; i < N; i++) {
		cin >> x;
		vec.push_back(x);
	}

	sort(vec.begin(), vec.end()); //�������� ����

	for (int i = 0; i < N; i++) {
		cout << vec[i] << endl;
	}
	return 0;
}