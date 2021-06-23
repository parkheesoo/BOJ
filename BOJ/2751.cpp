#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

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

	sort(vec.begin(), vec.end()); //오름차순 정렬
	ostringstream oss;

	for (int i = 0; i < N; i++) {
		oss << vec[i] << endl;
	}

	cout << oss.str();  
	return 0;
}