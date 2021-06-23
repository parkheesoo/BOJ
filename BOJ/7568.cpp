#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0, k = 0;
	cin >> N;
	vector <int> kg;
	vector <int> cm;

	int x = 0, y = 0;
	vector <int> vec1;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		kg.push_back(x);
		cm.push_back(y);
	}

	for (int i = 0; i < N; i++) {
		k = 1;
		for (int j = 0; j < N; j++) {
			if (kg[i] < kg[j] && cm[i] < cm[j]) {
				k++;
			}
		}
		cout << k << ' ';
	}
	return 0;
}